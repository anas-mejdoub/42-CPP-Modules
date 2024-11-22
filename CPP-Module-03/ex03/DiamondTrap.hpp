/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:16:37 by amejdoub          #+#    #+#             */
/*   Updated: 2024/10/28 15:28:43 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_H
#define DIAMOND_H

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap :  public ScavTrap, public FragTrap
{
    public :
        DiamondTrap(const std::string& name);
        ~DiamondTrap();
        DiamondTrap(const DiamondTrap &other);
        DiamondTrap& operator=(const DiamondTrap& other);
        void whoAmi();
        
    private :
        std::string _name;
};
#endif