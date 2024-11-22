/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 13:14:18 by amejdoub          #+#    #+#             */
/*   Updated: 2024/10/28 16:30:13 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
Zombie::Zombie()
{
    std::cout << "zombie created" << std::endl;
}
Zombie::~Zombie()
{
    std::cout << "zombie destroyed " << _name << std::endl;
}

std::string Zombie::getName()
{
    return _name;
}

void Zombie::setName(std::string name)
{
    _name = name;
}

void Zombie::announce()
{
    std::cout << getName() << ": BraiiiiiiinnnzzzZ..."<< std::endl;
}