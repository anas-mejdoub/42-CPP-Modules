/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:40:14 by amejdoub          #+#    #+#             */
/*   Updated: 2024/11/20 12:20:44 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    _type = "Dog";
    _brain = new Brain;
    std::cout << "Dog created" << std::endl;
}

Dog::~Dog()
{
    delete _brain;
    std::cout << "Dog destroyed" << std::endl;
}

Dog::Dog(const Dog& other) : Animal()
{
    std::cout << "dog copy constructor called" << std::endl;
    this->_brain = new Brain(*other._brain);
    this->_type = other._type;
}

Dog& Dog::operator=(const Dog& other)
{
    if (this != &other)
    {
        this->_brain = new Brain(*other._brain);
        this->_type = other._type;
    }
    std::cout << "dog assigning operator called" << std::endl;
    return *this;
}

void Dog::makeSound()
{
    std::cout << "haw haw hh" << std::endl;
}