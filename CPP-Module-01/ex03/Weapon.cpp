/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 18:13:16 by amejdoub          #+#    #+#             */
/*   Updated: 2024/10/28 16:56:20 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    setType(type);
}

Weapon::~Weapon()
{
    std::cout << "weapon removed" << std::endl;
}

void Weapon::setType(std::string type)
{
    _type = type;
}

std::string Weapon::getType()
{
    return _type;
}
