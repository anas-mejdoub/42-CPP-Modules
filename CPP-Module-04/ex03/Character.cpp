/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 18:08:48 by amejdoub          #+#    #+#             */
/*   Updated: 2024/11/20 12:27:47 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name)
{
    
    _name  = name;
    am = NULL;
    for (int i = 0; i < 4; i++)
    {
        inventory[i] = NULL;
    }
    std::cout << "character name constructor is called" << std::endl;
}

Character::~Character()
{
    t_am *tmp = NULL;
    while (am)
    {
        tmp = am->next;
        if (!am->duped)
            delete (AMateria *)am->adress;
        delete am;
        am = tmp;
    }
    std::cout << "Character destructor called" << std::endl;
}
bool isDuped(t_am *l, t_am *node)
{
    while (l)
    {
        if (l->adress == node->adress)
        {
            return true;
        }
        l = l->next;
    }
    return false;
}
void Character::equip(AMateria *m)
{
    AMateria *tmpMateria = m;
    t_am *tmp = new_node(tmpMateria);
    if (isDuped(am, tmp))
        tmp->duped = true;
    add_back(&am, tmp);
    bool equiped = false;
    int i;
    for(i = 0; i < 4; i++)
    {
        if (!inventory[i])
        {
            equiped = true;
            inventory[i] = tmpMateria;
            return;
        }
    }
    if (i == 4 && !equiped)
        std::cout << "couldn't equip this materia : the inventory is full !" << std::endl;
}


void Character::unequip(int idx)
{
    inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4 && inventory[idx])
        inventory[idx]->use(target);
}

Character::Character(const Character& other) : _name(other._name) {
    am = other.am;
    for (int i = 0; i < 4; i++)
    {
        if (other.inventory[i])
        {
            inventory[i] = other.inventory[i]->clone();
        } 
        else
        {
            inventory[i] = NULL;
        }
    }
    std::cout << "Character copy constructor called" << std::endl;
}

Character& Character::operator=(const Character& other) {
    if (this != &other)
    {
        for (int i = 0; i < 4; i++)
        {
            if (inventory[i])
            {
                delete inventory[i];
                inventory[i] = NULL;
            }
        }
        _name = other._name;
        am = other.am;
        for (int i = 0; i < 4; i++)
        {
            if (other.inventory[i])
            {
                inventory[i] = other.inventory[i]->clone();
            }
        }
    }
    std::cout << "Character assignment operator called" << std::endl;
    return *this;
}

std::string const & Character::getName() const
{
    return _name;
}

Character::Character()
{
    am = NULL;
    for (int i = 0; i < 4; ++i)
        inventory[i] = NULL;
    std::cout << "Character default constructor called" << std::endl;
}

t_am *last(t_am *l)
{
    while (l && l->next)
    {
        l = l->next;
    }
    return l;
}

void add_back(t_am **l, t_am *new_am)
{
    if (!*l)
        *l = new_am;
    else
    {
        last(*l)->next = new_am;
    }
}

t_am *new_node(void *ptr)
{
    t_am *node = new t_am;
    node->adress = ptr;
    node->next = NULL;
    node->duped = false;
    return node;
}
