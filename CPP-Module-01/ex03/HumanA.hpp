/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 18:19:23 by amejdoub          #+#    #+#             */
/*   Updated: 2024/10/28 17:05:48 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_H
#define HUMAN_A_H

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
    public :
        void attack();
        void setWeapon(Weapon &weapon);
        HumanA(std::string name, Weapon &weapon);
        void setName(std::string name);
        ~HumanA();
    private :
        std::string _name;
        Weapon& _weapon;

};

#endif