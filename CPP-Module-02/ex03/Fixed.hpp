/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 15:36:52 by amejdoub          #+#    #+#             */
/*   Updated: 2024/11/09 15:07:04 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
class Fixed 
{
    public :
        int getRawBits()  const;
        Fixed();
        Fixed(float value);
        Fixed(const int value);
        float toFloat(void )  const;
        int toInt(void) const;
        ~Fixed();
        Fixed(const Fixed& obj);
        Fixed& operator=(const Fixed& obj);
        void setRawBits(int value);
        bool operator>(const Fixed &other)   const;
        bool operator>=(const Fixed &other)   const;
        bool operator<(const Fixed &other) const;
        bool operator<=(const Fixed &other) const;
        bool operator==(const Fixed &other) const;
        bool operator!=(const Fixed &other) const;
        Fixed operator+(const Fixed &other) const;
        Fixed operator-(const Fixed &other) const;
        Fixed operator*(const Fixed &other) const;
        Fixed operator/(const Fixed &other) const;
        Fixed& operator++();
        Fixed operator++(int);
        static Fixed& min(Fixed& a, Fixed& b);
        static const Fixed& min(const Fixed& a, const Fixed& b);
        static Fixed& max(Fixed& a, Fixed& b);
        static const Fixed& max(const Fixed& a, const Fixed& b);
        int getFracBits() const;
    private :
        int n;
        static const int fracBits;
};
std::ostream& operator<<(std::ostream& os, const  Fixed& obj);

// class Point 
// {
//     public :
//         Point();
//         Point(float x, float y);
//     private :
//         Fixed x;
//         Fixed y;
// };
#endif