/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:23:02 by amejdoub          #+#    #+#             */
/*   Updated: 2024/11/09 16:06:29 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string name)
{
    std::cout << "hola ScavTrap name constructor" << std::endl;
    this->_name = name;
    this->_hitPoint = 100;
    this->_energyPoint = 50;
    this->_attackDamage = 20;
}

void ScavTrap::attack(const std::string& s)
{
    if (_hitPoint != 0 && _energyPoint != 0)
    {
        std::cout << "ScavTrap " << this->_name << " attacks " << s << " , causing " << _hitPoint << " points of damage!" << std::endl;
        _energyPoint--;
    }
    else
    {
        std::cout << _name << " ScavTrap don't have enough points to attack!" << std::endl;
    }
}
ScavTrap::ScavTrap(const ScavTrap& other)
{
    this->_name = other._name;
    this->_energyPoint = other._energyPoint;
    this->_attackDamage = other._attackDamage;
    this->_hitPoint = other._hitPoint;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    if (this != &other)
    {
        this->_name = other._name;
        this->_hitPoint = other._hitPoint;
        this->_energyPoint = other._energyPoint;
        this->_attackDamage = other._attackDamage;
    }
    return *this;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destroyed Good Bye champ !" << std::endl;
}

