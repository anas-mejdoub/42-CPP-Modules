/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:04:49 by amejdoub          #+#    #+#             */
/*   Updated: 2024/11/20 12:29:43 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    _type = "WrongCat";
    std::cout << "WrongCat created" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destroyed" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other)
{
    std::cout << "wrong cat copy constructor called" << std::endl;
    this->_type = other._type;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    if (this != &other)
    {
        this->_type = other._type;
    }
    std::cout << "wrong cat assigning operator called" << std::endl;
    return *this;
}

void WrongCat::makeSound()
{
    std::cout << "meow meow " << std::endl;
}