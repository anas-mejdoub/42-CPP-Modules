/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:40:14 by amejdoub          #+#    #+#             */
/*   Updated: 2024/11/20 12:13:27 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    _type = "Dog";
    std::cout << "Dog created" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destroyed" << std::endl;
}

Dog::Dog(const Dog& other)
{
    std::cout << "dog copy constructor called" << std::endl;
    this->_type = other._type;
}

Dog& Dog::operator=(const Dog& other)
{
    if (this != &other)
    {
        this->_type = other._type;
    }
    std::cout << "dog assigning operator called" << std::endl;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "haw haw hh" << std::endl;
}