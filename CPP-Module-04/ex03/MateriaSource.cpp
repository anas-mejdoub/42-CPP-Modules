/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 20:42:02 by amejdoub          #+#    #+#             */
/*   Updated: 2024/11/20 12:25:29 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        _template[i] = NULL;
    }
    std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (_template[i])
            delete _template[i];
    }
    std::cout << "MateriaSource destructor called" << std::endl;
}

void MateriaSource::learnMateria(AMateria* m)
{
    int i;
    bool found = false;
    for (i = 0; i < 4; i++)
    {
        if (!_template[i])
        {
            _template[i] = m;
            found = true;
            break;
        }
    }
    if (i == 4 && !found)
        std::cout << "template is full" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (_template[i] && _template[i]->getType() == type)
            return _template[i]->clone();
    }
    return 0;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
    for (int i = 0; i < 4; ++i)
    {
        if (other._template[i])
            _template[i] = other._template[i]->clone();
        else
            _template[i] = NULL;
    }
    std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
    if (this != &other)
    {
        for (int i = 0; i < 4; ++i)
        {
            delete _template[i];
            if (other._template[i])
                _template[i] = other._template[i]->clone();
            else
                _template[i] = NULL;
        }
    }
    std::cout << "MateriaSource assignment operator called" << std::endl;
    return *this;
}