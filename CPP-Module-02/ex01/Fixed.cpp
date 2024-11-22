/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 15:37:15 by amejdoub          #+#    #+#             */
/*   Updated: 2024/11/04 17:58:47 by amejdoub         ###   ########.fr       */
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

Fixed::Fixed(const int value)
{
    std::cout << "int consturctor called" << std::endl;
    n = value << fracBits;
}

Fixed::Fixed(float value)
{
    std::cout << "float constructor called" << std::endl;
    n = roundf(value * (1 << fracBits));
}


int Fixed::getRawBits() const
{
    return n;
}

void Fixed::setRawBits(int value)
{
    n = value;
}

float Fixed::toFloat(void ) const
{
    return (float )n / (1 << fracBits);
}

int Fixed::toInt(void) const
{
    return n >> fracBits;
}

int Fixed::getFracBits() const
{
    return this->fracBits;
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj) {
    float value = (float )obj.getRawBits() / (1 << obj.getFracBits());
    os << value;
    return os;
}
