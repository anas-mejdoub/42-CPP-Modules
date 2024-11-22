/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 19:35:28 by amejdoub          #+#    #+#             */
/*   Updated: 2024/11/19 17:45:37 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
#define ICE_H

#include "AMateria.hpp"
class Ice : public AMateria
{
    public :
        AMateria* clone() const;
        void use(ICharacter& target);
        Ice();
        ~Ice();
        Ice(const Ice& other);
        Ice& operator=(const Ice& other);
};
#endif