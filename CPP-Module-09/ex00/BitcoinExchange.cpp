/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 16:40:16 by amejdoub          #+#    #+#             */
/*   Updated: 2025/01/28 12:28:44 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::map<std::string, std::string>parseDataBase()
{
    std::ifstream dataFile("data.csv");
    if (!dataFile.is_open())
    {
        throw std::runtime_error("could not open the data.csv file !");
    }
    std::map <std::string, std::string>data;
    std::string line;
    std::getline(dataFile, line);
    if (line != "date,exchange_rate")
        throw std::runtime_error("invalid header in the data file !");
    while(std::getline(dataFile, line))
    {
        if (line.empty())
            break;
        int i = line.find(',');
        std::string key = line.substr(0, i);
        std::string value = line.substr(i + 1);
        data[key] = value;
    }
    return data;
    
}
bool isLeapYear(int year)
{
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
            return year % 400 == 0;
        return true;
    }
    return false;
}

bool validateDate(std::string dateFormat)
{
    if (dateFormat.length() != 10)
        return false;
    for(size_t i = 0; i < dateFormat.length(); i++)
    {
        if ((i == 4 || i == 7) && dateFormat[i] == '-')
            continue;
        if (!isdigit(dateFormat[i]))
        {
            return false;
        }
    }
    return true;
}

bool parseDate(std::string &dateFormat)
{
    if (!validateDate(dateFormat))
    {
        dateFormat = "invalid date !";
        return false;
    }
    int year = std::atoi(dateFormat.substr(0, 4).c_str());
    if (year < 2009)
        return false;
    int days[] ={ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (isLeapYear(year))
        days[1] = 29;
    int i = dateFormat.find('-', 5);
    int month = std::atoi(dateFormat.substr(5, i - 5).c_str());
    int day = std::atoi(dateFormat.substr(i + 1, 2).c_str());
    if (month < 1 || month > 12)
    {
        dateFormat = "invalid date <month>";
        return false;
    }
    if (day < 1 || day > days[month - 1])
    {
        dateFormat = "invalid date <day>";
        return false;
    }
    return true;
}
std::string getCloserDate(std::map<std::string, std::string>map, std::string date)
{
    std::map<std::string, std::string>::iterator it = map.begin();
    if (date < it->first)
    {
        return "date is too small";
    }
    
    if (map.find(date) != map.end())
    {
        return map.find(date)->first;
    }
    map[date] = "";
    it = map.find(date);
    if (it != map.begin())
        it--;
    return it->first;
}

void trim(std::string &str) {
    size_t start = str.find_first_not_of(' ');
    if (start != std::string::npos)
        str = str.substr(start);
    size_t end = str.find_last_not_of(' ');
    if (end != std::string::npos)
        str = str.substr(0, end + 1);
}
bool checkValue(std::string s)
{
    bool found = false;
    trim(s);
    for (size_t i = 0; i < s.length(); i++)
    {
        if (i == 0 && (s[i] == '+' || s[i] == '-' ))
            continue;
        else if (s[i] == '.' && !found && i != 0)
            found = true;
        else if (!isdigit(s[i]))
            return false;
    }
    return true;
}
void parseInputFile(std::string fileName, std::map<std::string, std::string> data)
{
    std::ifstream file(fileName);
    if (!file.is_open())
    {
        throw std::runtime_error("file could not be opened !");
    }

    std::string line;
    std::getline(file, line);
    if (line != "date | value")
        throw std::runtime_error("invalid header in the input file");
    while(std::getline(file, line))
    {
        if (line.empty())
            break;
        size_t i = line.find('|');
        std::string key;
        std::string value;
        if (std::string::npos == i)
        {
            std::cout << "bad input => " << line << std::endl;
        }
        else
        {
            key = line.substr(0, i - 1);
            value = line.substr(i + 1);
            if (key.empty() || value.empty() || !parseDate(key))
                std::cout << "error => invalid date or value" << std::endl;
            else if (std::atoll(value.c_str()) > 1000)
                std::cout << "bad input => " << "too large number" << std::endl;
            else if (std::atoi(value.c_str()) < 0)
                std::cout << "error => " << "negative value" << std::endl;
            else if(!checkValue(value))
                std::cout << "error => " << "bad value " << value << std::endl;
            else
            {
                key = getCloserDate(data, key);
                if (key == "date is too small")
                    std::cout << "error => " << key << std::endl;
                else
                    std::cout << key << " => " << std::atof(value.c_str()) * std::atof(data[key].c_str()) << std::endl;
            }
        }

    }
}
