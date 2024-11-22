/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:09:58 by amejdoub          #+#    #+#             */
/*   Updated: 2024/11/09 17:38:04 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

std::string ClapTrap::getName()
{
    return _name;
}


int ClapTrap::getHitPoint()
{
    return _hitPoint;
}


int ClapTrap::getAttackDamage()
{
    return _attackDamage;
}

ClapTrap::ClapTrap(const std::string name)
{
    std::cout << "ClapTrap name constr called" << std::endl;
    _name = name;
    _hitPoint = 10;
    _energyPoint = 10;
    _attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "ClapTrap copy constr called" << std::endl;
    _name = other._name;
    _hitPoint = other._hitPoint;
    _attackDamage = other._attackDamage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
    if (this != &other)
    {
        this->_attackDamage = other._attackDamage;
        this->_hitPoint = other._hitPoint;
        this->_name = other._name;
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap object removed" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (_hitPoint != 0 && _energyPoint != 0)
    {
        std::cout << "ClapTrap " << _name << " attacks " << target << " , causing " << _attackDamage << " points of damage!" << std::endl;
        _energyPoint--;
    }
    else
    {
        std::cout << _name << " ClapTrap don't have enough points to attack!" << std::endl;
    }
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if (_hitPoint != 0 && _energyPoint != 0)
    {
        std::cout << _name << " ClapTrap repairs itself "  << amount << " hit point now has " << _hitPoint + amount << std::endl;
        _energyPoint--;
        _hitPoint += amount;
    }
    else
    {
        std::cout << _name << " ClapTrap don't have enough points to repair !" << std::endl;
    }
}
void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout  << _name << " ClapTrap took " << amount << " amount of dammage " << std::endl;
    _hitPoint -= amount;
    if (_hitPoint < 0)
        _hitPoint = 0;
}

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap default constarctor called" << std::endl;
    _hitPoint = 10;
    _energyPoint = 10;
    _attackDamage = 0;
}