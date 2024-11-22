/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 19:46:43 by amejdoub          #+#    #+#             */
/*   Updated: 2024/10/31 12:02:31 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int replace(int ac, char const *av[])
{
    if (ac != 4)
    {
        std::cout << "the number of parameters required is 3 (filename, str, to_replace)\n";
        return 1;
    }
    
    std::string str = av[2];
    std::string toReplace = av[3];
    std::ifstream fileName(av[1]);
    if (!fileName.is_open())
    {
        std::cout << "couldn't open the input file" << std::endl;
        return 1;
    }
    std::string tmp;
    std::string content;
    while (std::getline(fileName, tmp))
    {
        tmp += '\n';
        content.append(tmp);
    }
    size_t index;
    size_t i = 0;
    size_t j = 0;
    std::string newStr;
    while (j < content.length())
    {
        index = content.find(str, i);
        if (i == index)
        {
            newStr.append(toReplace);
            i = index + 1;    
            j += str.length();
        }
        else
        {
            if (index == std::string::npos)
            {
                index = content.length() - j;
                newStr.append(content.substr(j, index));
                break;
            }
            newStr.append(content.substr(j, index - j));
            i = index;
            j = index;
        }
    }
    std::string tmp2 = av[1];
    std::ofstream outputFile(tmp2.append(".replace"));
    if (outputFile.is_open())
        outputFile << newStr;
    else
        std::cerr << "err with creating replaced file";
    return 0;
}

int main(int ac, char const *av[])
{
    return replace(ac, av);
}
