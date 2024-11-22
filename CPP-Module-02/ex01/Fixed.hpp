/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 15:36:52 by amejdoub          #+#    #+#             */
/*   Updated: 2024/11/09 15:06:43 by amejdoub         ###   ########.fr       */
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
        int getFracBits() const;
    private :
        int n;
        static const int fracBits;
};

std::ostream& operator<<(std::ostream& os, const  Fixed& obj);

#endif