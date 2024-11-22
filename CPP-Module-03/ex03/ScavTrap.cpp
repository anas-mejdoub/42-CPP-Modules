/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:23:02 by amejdoub          #+#    #+#             */
/*   Updated: 2024/11/09 18:16:10 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
    std::cout << "hola ScavTrap" << std::endl;
    this->_hitPoint = 100;
    this->_energyPoint = 50;
    this->_attackDamage = 20;
}

void ScavTrap::attack(const std::string& s)
{
    if (_hitPoint != 0 && _energyPoint != 0)
    {
        std::cout << "ScavTrap " << _name << " attacks " << s << " , causing " << _hitPoint << " points of damage!" << std::endl;
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
