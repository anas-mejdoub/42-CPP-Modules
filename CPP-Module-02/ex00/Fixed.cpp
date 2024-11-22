/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:35:56 by amejdoub          #+#    #+#             */
/*   Updated: 2024/11/02 17:12:28 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fracBits = 8;
Fixed::Fixed()
{
    std::cout << "default consturctor called" << std::endl;
    n = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& obj)
{
    std::cout << "copy constructor called" << std::endl;
    this->n = obj.n;
}

Fixed& Fixed::operator=(const Fixed & obj)
{
    std::cout << "copy assignment operator called" << std::endl;
    if (this != &obj)
    {
        this->n = obj.n;
    }
    return *this;
}

int Fixed::getRawBits()
{
    std::cout << "getRawBits member function called" << std::endl;
    return n;
}

void Fixed::setRawBits(int value)
{
    n = value;
}