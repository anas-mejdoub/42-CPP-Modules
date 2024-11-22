/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 19:35:14 by amejdoub          #+#    #+#             */
/*   Updated: 2024/11/19 18:07:23 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATMATERIA_H
#define ATMATERIA_H

#include <iostream>
#include "ICharacter.hpp"
class ICharacter;
class AMateria
{
    protected:
        std::string _type;
    public:
        AMateria(std::string const & type);
        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
        virtual ~AMateria();
        AMateria(const AMateria& other);
        AMateria();
        AMateria& operator=(const AMateria& other);
};
#endif