/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:59:09 by amejdoub          #+#    #+#             */
/*   Updated: 2024/11/20 12:14:56 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Wronganimal created" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Wronganimal destroyed" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    this->_type = other._type;
    std::cout << "Wronganimal copy constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    if (this != &other)
    {
        this->_type = other._type;
    }
    std::cout << "Wronganimal assigning operator called" << std::endl;
    return *this;
}

void WrongAnimal::makeSound()
{
    std::cout << "some Wronganimal sound" << std::endl; 
}
std::string WrongAnimal::getType()
{
    return _type;
}