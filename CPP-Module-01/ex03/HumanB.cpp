/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 19:11:48 by amejdoub          #+#    #+#             */
/*   Updated: 2024/10/28 16:58:57 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::setWeapon(Weapon& weapon)
{
    _weapon = &weapon;
}
void HumanB::setName(std::string name)
{
    _name = name;
    _weapon = NULL;
}
HumanB::~HumanB()
{

}

std::string HumanB::getName()
{
    return _name;
}
Weapon *HumanB::getWeapon()
{
    return _weapon;
}
    
HumanB::HumanB(std::string name)
{
    setName(name);
}

void HumanB::attack()
{
    if (getWeapon() != NULL)
        std::cout << getName() << " attacks with thier " << getWeapon()->getType() << std::endl;
    else
        std::cout << getName() << " has no weapon to attack with hh" << std::endl;
}