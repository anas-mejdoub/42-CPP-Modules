/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:43:57 by amejdoub          #+#    #+#             */
/*   Updated: 2024/11/20 12:18:05 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    _type = "Cat";
    _brain = new Brain;
    std::cout << "Cat created" << std::endl;
}

Cat::~Cat()
{
    delete _brain;
    std::cout << "Cat destroyed" << std::endl;
}

Cat::Cat(const Cat& other)
{
    std::cout << "cat copy constructor called" << std::endl;
    this->_brain = new Brain(*other._brain);
    this->_type = other._type;
}

Cat& Cat::operator=(const Cat& other)
{
    if (this != &other)
    {
        this->_brain = new Brain(*other._brain);
        this->_type = other._type;
    }
    std::cout << "cat assigning operator called" << std::endl;
    return *this;
}

void Cat::makeSound()
{
    std::cout << "meow meow " << std::endl;
}
