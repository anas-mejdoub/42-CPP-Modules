/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 19:49:33 by amejdoub          #+#    #+#             */
/*   Updated: 2024/11/20 12:21:47 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain created" << std::endl;
    _type = "default";
}

Brain::~Brain()
{
    std::cout << "Brain destroyed" << std::endl;
}

Brain::Brain(const Brain& other)
{
    std::cout << "copy constr brain created" << std::endl;
    this->_type = other._type;
}

Brain& Brain::operator=(const Brain& other)
{
    if (this != &other)
    {
        this->_type = other._type;
    }
    std::cout << "Brain assigning operator called" << std::endl;
    return *this;
}
