/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:27:21 by amejdoub          #+#    #+#             */
/*   Updated: 2024/10/31 11:52:40 by amejdoub         ###   ########.fr       */
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
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning()
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::debug()
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}
void Harl::error()
{
    std::cout << "[ ERROR ]" << std::endl;
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
    std::string tmp[5] = {"debug", "info", "warning", "error"};
    int i;
    for (i = 0; tmp[i] != level && i < 4 ; i++);
    switch (i)
    {
        case 0:
            (this->*ptrFun[0])();
        case 1 :
            (this->*ptrFun[1])();
        case 2 :
            (this->*ptrFun[2])();
        case 3 :
            (this->*ptrFun[3])();
            break;
        default :
            std::cout <<  "[ Probably complaining about insignificant problems ]" << std::endl ;
    }
}