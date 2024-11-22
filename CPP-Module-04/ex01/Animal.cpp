/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:28:30 by amejdoub          #+#    #+#             */
/*   Updated: 2024/11/20 12:17:34 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "animal created" << std::endl;
}

Animal::~Animal()
{
    std::cout << "animal destroyed" << std::endl;
}

Animal::Animal(const Animal& other)
{
    std::cout << "animal copy constructor called" << std::endl;
    this->_type = other._type;
}

Animal& Animal::operator=(const Animal& other)
{
    if (this != &other)
    {
        this->_type = other._type;
    }
    std::cout << "animal assinging operator called" << std::endl;
    return *this;
}

void Animal::makeSound()
{
    std::cout << "some animal sound" << std::endl; 
}
std::string Animal::getType()
{
    return _type;
}