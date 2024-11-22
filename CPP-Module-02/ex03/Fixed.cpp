/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 15:37:15 by amejdoub          #+#    #+#             */
/*   Updated: 2024/11/03 15:54:02 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fracBits = 8;
Fixed::Fixed()
{
    // std::cout << "default consturctor called" << std::endl;
    n = 0;
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& obj)
{
    // std::cout << "copy constructor called" << std::endl;
    this->n = obj.n;
}

Fixed& Fixed::operator=(const Fixed & obj)
{
    // std::cout << "copy assignment operator called" << std::endl;
    if (this != &obj)
    {
        this->n = obj.n;
    }
    return *this;
}

Fixed::Fixed(const int value)
{
    // std::cout << "int consturctor called" << std::endl;
    n = value << fracBits;
}

Fixed::Fixed(float value) 
{
    // std::cout << "float constructor called" << std::endl;
    // std::cout <<value << std::endl;
    
    n = roundf(value * (1 << fracBits));
    // std::cout << "after " << n;
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
    // std::cout <<  "to float called " << (float )n / (1 >> fracBits) << std::end;
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

bool Fixed::operator>(const Fixed &other) const
{
    return this->n > other.n;
}
bool Fixed::operator>=(const Fixed &other) const
{
    return this->n >= other.n;
}

bool Fixed::operator<(const Fixed &other) const
{
    return this->n < other.n;
}
bool Fixed::operator<=(const Fixed &other) const
{
    return this->n <= other.n;
}

bool Fixed::operator==(const Fixed &other) const
{
    return this->n == other.n;
}
bool Fixed::operator!=(const Fixed &other) const
{
    return this->n != other.n;
}

Fixed Fixed::operator+(const Fixed &other) const
{
    Fixed obj(this->n + other.n);
    return obj;
}
Fixed Fixed::operator*(const Fixed &other) const
{
    Fixed obj(this->n * other.n);
    return obj;
}
Fixed Fixed::operator-(const Fixed &other) const
{
    Fixed obj(this->n - other.n);
    return obj;
}

Fixed Fixed::operator/(const Fixed &other) const
{
    Fixed obj(this->n / other.n);
    return obj;
}

Fixed& Fixed::operator++()
{
    this->n++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp = *this;
    this->n++;
    return tmp;
}
Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    if (a > b)
        return b;
    else
        return b;
}
const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    if (a > b)
        return b;
    else
        return b;
}
Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    if (a < b)
        return b;
    else
        return b;
}
const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    if (a < b)
        return b;
    else
        return b;
}