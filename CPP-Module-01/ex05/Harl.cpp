/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:27:21 by amejdoub          #+#    #+#             */
/*   Updated: 2024/10/29 12:40:48 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    ptrFun[0] = &Harl::debug;
    ptrFun[1] = &Harl::info;
    ptrFun[2] = &Harl::warning;
    ptrFun[3] = &Harl::error;
}
Harl::~Harl()
{
    
}
void Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning()
{
    std::cout << "think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::debug()
{
    std::cout << "love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}
void Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void toLowerStr(std::string &lvl)
{
    for (size_t i = 0; i < lvl.length(); i++)
    {
        lvl[i] = std::tolower(lvl[i]);
    }
}

void Harl::complain(std::string level)
{
    toLowerStr(level);
    std::string tmp[4] = {"debug", "info", "warning", "error"};
    int i = 0;
    while (level != tmp[i] && i < 3)
    {
        i++;
    }
    if (i == 3 && level != tmp[3])
    {
        std::cout << "wrong level" << std::endl;
        return ;
    }
    (this->*ptrFun[i])();
}