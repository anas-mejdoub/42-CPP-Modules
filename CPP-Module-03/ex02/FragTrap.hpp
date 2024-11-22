/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 12:19:05 by amejdoub          #+#    #+#             */
/*   Updated: 2024/10/27 16:07:01 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_H
#define FRAG_H
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public :
        FragTrap(const std::string &name);
        FragTrap(const FragTrap& other);
        FragTrap& operator=(const FragTrap &other);
        ~FragTrap();
        void highFivesGuys(void);
};

#endif