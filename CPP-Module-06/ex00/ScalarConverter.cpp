/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 15:44:30 by amejdoub          #+#    #+#             */
/*   Updated: 2025/01/07 17:14:04 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


ScalarConverter::ScalarConverter() {

}


ScalarConverter::~ScalarConverter() {

}


ScalarConverter::ScalarConverter(const ScalarConverter& other) {
    (void)other;

}


ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) {
    (void)other;
    if (this != &other) {

    }
    return *this;
}

bool checkInt(std::string s)
{

    for (size_t i = 0; i < s.length(); i++)
    {
        if (i == 0 && (s[i] == '+' || s[i] == '-' ))
            continue;
        else if (!isdigit(s[i]))
            return false;
    }
    return true;
}

bool checkFloat(const std::string& s)
{

    bool found = false;
    if (s.find('f') == std::string::npos)
        return false;
    for (size_t i = 0; i < s.length(); i++)
    {
        if (i == 0 && (s[i] == '+' || s[i] == '-' ))
        continue;
        else if (s[i] == 'f' && i != s.length() - 1)
        return false;
        else if (s[i] == 'f' && i == s.length() - 1)
        continue;
        else if (s[i] == '.' && !found && i != 0)
        {
            found = true;
        }
        else if (!isdigit(s[i]))
        return false;
    }
    return true;
}
bool checkDouble(std::string s)
{
    bool found = false; 
    for (size_t i = 0; i < s.length(); i++)
    {
        if (i == 0 && (s[i] == '+' || s[i] == '-' ))
            continue;
        else if (s[i] == '.' && !found && i != 0)
        {
            found = true;
        }
        else if (!isdigit(s[i]))
            return false;
        }
    return true;
}
float parseFloat(std::string s)
{
    std::string dec;
    std::string frac;
    size_t pos = s.find('.');
    dec = s.substr(0, pos);
    frac = s.substr(pos + 1, s.length() - pos - 2);
    float division = pow(10, frac.length());
    float f = std::atoi(dec.c_str());
    float ff = static_cast <float>(std::atoi(frac.c_str()) / division);
    f += ff;
    return f; 
}

void printFormats(char c, int i, float f, double d)
{

    std::cout << "char : " << (isprint(c) ? std::string(1, c) : "Non displayable") << std::endl;
    std::cout << "int : " << i << std::endl;

    std::cout << "float : " << f;

    int a = f;
    if (static_cast<int>(f - a) == 0)
    {
        std::cout << ".0";
    }
    std::cout << "f" << std::endl;
    std::cout << "double : " << d ;
    if (static_cast<int>(d - a) == 0)
    {
        std::cout << ".0";
    }
    std::cout << std::endl;


}

void ScalarConverter::convert(std::string s)
{
    if (s == "nan" || s == "nanf")
    {
        std::cout << "char : impossible\nint : impossible\nfloat : nanf\ndouble : nan";
    }
    else if (s == "+inf" || s == "+inff")
    {
        std::cout << "char : impossible\nint : impossible\nfloat : +inff\ndouble : +inf";
    } 
    else if (s == "-inf" || s == "-inff")
    {
        std::cout << "char : impossible\nint : impossible\nfloat : -inff\ndouble : -inf";
    } 
    else if (s.length() == 1 && isprint(s[0]) && !isdigit(s[0]))
    {
        char c = static_cast <char>(s[0]);
        int i = static_cast <int>(s[0]);
        float f = static_cast <float>(s[0]);
        double d = static_cast <double>(s[0]);
        printFormats(c, i, f, d);
    }
    else if (checkInt(s))
    {
        int n = std::atoi(s.c_str());
        char c = static_cast <char>(n);
        int i = static_cast <int>(n);
        float f = static_cast <float>(n);
        double d = static_cast <double>(n);
        printFormats(c, i, f, d);
    }
    else if (checkFloat(s))
    {
        float f = parseFloat(s);
        char c = static_cast <char>(f);
        int i = static_cast <int>(f);
        double d = static_cast <double>(f);
        printFormats(c, i, f, d);
    }
    else if (checkDouble(s))
    {
        double d = std::atof(s.c_str());
        std ::cout << d << std::endl;
        char c = static_cast <char>(d);
        int i = static_cast <int>(d);
        float f = static_cast <float>(d);
        printFormats(c, i, f, d);
    }
    else
    {
        std::cout << "conversion could not be possible !" << std::endl;
    }
}
