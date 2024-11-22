/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:43:57 by amejdoub          #+#    #+#             */
/*   Updated: 2024/11/20 12:13:59 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    _type = "Cat";
    std::cout << "Cat created" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destroyed" << std::endl;
}

Cat::Cat(const Cat& other)
{
    std::cout << "cat copy constructor called" << std::endl;
    this->_type = other._type;
}

Cat& Cat::operator=(const Cat& other)
{
    if (this != &other)
    {
        this->_type = other._type;
    }
    std::cout << "cat assigning operator called" << std::endl;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "meow meow" << std::endl;
}

