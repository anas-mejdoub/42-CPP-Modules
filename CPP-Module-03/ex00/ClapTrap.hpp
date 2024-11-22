/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:03:15 by amejdoub          #+#    #+#             */
/*   Updated: 2024/10/26 14:23:14 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_H
#define CLAP_H
#include <iostream>
#include <string>
class ClapTrap
{
    public :
        ClapTrap(const std::string name);
        ~ClapTrap();
        ClapTrap(const ClapTrap &other);
        ClapTrap& operator=( const ClapTrap &other);
        std::string getName();
        int getHitPoint();
        int getAttackDamage();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
    private :
        std::string _name;
        int _hitPoint;
        int _energyPoint;
        int _attackDamage;
};

#endif