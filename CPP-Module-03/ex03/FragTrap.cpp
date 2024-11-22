/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 12:18:51 by amejdoub          #+#    #+#             */
/*   Updated: 2024/10/29 16:12:50 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
    _hitPoint = 100;
    _energyPoint = 100;
    _attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &other)
{
    _name = other._name;
    _hitPoint = other._hitPoint;
    _attackDamage = other._attackDamage;
    _energyPoint = other._energyPoint;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    if (this != &other)
    {
        _name = other._name;
        _hitPoint = other._hitPoint;
        _attackDamage = other._attackDamage;
        _energyPoint = other._energyPoint;
    }
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "a FragTrap removed RIP legend" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << this->_name << " requests a high five! ✋" << std::endl;
}
