/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 18:23:44 by amejdoub          #+#    #+#             */
/*   Updated: 2024/10/28 17:04:04 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::setWeapon(Weapon &weapon)
{
    _weapon = weapon;
}
void HumanA::setName(std::string name)
{
    _name = name;
}
HumanA::~HumanA()
{

}


    
HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{

}

void HumanA::attack()
{
    std::cout << _name << " attacks with thier " << _weapon.getType() << std::endl;
}