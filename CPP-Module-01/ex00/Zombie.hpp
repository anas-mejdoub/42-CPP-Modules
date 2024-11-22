/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 13:13:55 by amejdoub          #+#    #+#             */
/*   Updated: 2024/10/31 11:47:12 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H

#define ZOMBIE_H
#include <string> 
class Zombie
{
    
    public :
        void announce();
        Zombie(std::string name);
        ~Zombie();
        std::string getName();
        void setName(std::string name);
    private :
        std::string _name;
};
void randomChump( std::string name );
Zombie* newZombie( std::string name );
#endif