/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 19:35:20 by amejdoub          #+#    #+#             */
/*   Updated: 2024/11/19 17:41:04 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"


AMateria::AMateria(std::string const & type)
{
    std::cout << "contsructor of AMateria called" << std::endl;
    _type = type;
}

void AMateria::use(ICharacter &target)
{
    (void)target;
}

std::string const & AMateria::getType() const
{
    return _type;
}

AMateria::~AMateria()
{
    std::cout << "AMateria destroyed" << std::endl;
}


AMateria::AMateria(const AMateria& other) : _type(other._type)
{
    std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria& AMateria::operator=(const AMateria& other)
{
    if (this != &other)
    {
        _type = other._type;
    }
    std::cout << "AMateria assignment operator called" << std::endl;
    return *this;
}

AMateria::AMateria()
{
    std::cout << "AMateria default constructor called" << std::endl;
}