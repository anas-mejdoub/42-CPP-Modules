/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 19:48:18 by amejdoub          #+#    #+#             */
/*   Updated: 2024/11/09 15:06:36 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    public :
        Fixed();
        ~Fixed();
        Fixed(const Fixed& obj);
        Fixed& operator=(const Fixed& obj);
        int getRawBits();
        void setRawBits(int value);
    private :
        int n;
        static const int fracBits;
};


#endif