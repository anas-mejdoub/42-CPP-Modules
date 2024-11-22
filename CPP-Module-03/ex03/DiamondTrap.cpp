/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:16:33 by amejdoub          #+#    #+#             */
/*   Updated: 2024/10/30 16:41:53 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"),  ScavTrap(name),  FragTrap(name)
{
    this->_name = name;
    this->_energyPoint = 50;
    std::cout <<"diamond trap constructor " << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "a diamond trap is down RIP" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    if (this != &other)
    {
        this->_attackDamage = other._attackDamage;
        this->_energyPoint = other._energyPoint;
        this->_hitPoint = other._hitPoint;
        this->_name = other._name;
    }
    return *this;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) :  ClapTrap(other._name + "_clap_name"), ScavTrap(other._name) , FragTrap(other._name)
{
    this->_attackDamage = other._attackDamage;
    this->_energyPoint = other._energyPoint;
    this->_hitPoint = other._hitPoint;
    this->_name = other._name;
}

void DiamondTrap::whoAmi()
{
    std::cout << _name << " " << ClapTrap::_name << std::endl;
}
