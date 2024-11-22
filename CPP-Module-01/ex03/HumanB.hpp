/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 19:12:03 by amejdoub          #+#    #+#             */
/*   Updated: 2024/10/28 16:55:48 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_H
#define HUMAN_B_H

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
    public :
        void attack();
        void setWeapon(Weapon& weapon);
        HumanB(std::string name);
        void setName(std::string name);
        std::string getName(void);
        Weapon *getWeapon();
        ~HumanB();
    private :
        std::string _name;
        Weapon *_weapon;

};

#endif