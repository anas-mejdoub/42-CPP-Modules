/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 18:13:39 by amejdoub          #+#    #+#             */
/*   Updated: 2024/09/01 18:42:40 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <string>
#include <iostream>

class Weapon 
{
    public :
        Weapon(std::string type);
        ~Weapon();
        std::string getType();
        void setType(std::string type);
    private :
        std::string _type;
};
#endif