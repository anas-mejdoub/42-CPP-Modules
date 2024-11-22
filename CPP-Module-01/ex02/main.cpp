/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 16:38:00 by amejdoub          #+#    #+#             */
/*   Updated: 2024/10/28 16:48:54 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string str =  "HI THIS IS BRAIN";
    std::string *strPtr = &str;
    std::string& strRef = str;
    std::cout << strPtr << std::endl;
    std::cout << &str << std::endl;
    std::cout << &strRef << std::endl;
    std::cout << *strPtr << std::endl;
    std::cout << str << std::endl;
    std::cout << strRef << std::endl;
}