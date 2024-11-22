/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:04:11 by amejdoub          #+#    #+#             */
/*   Updated: 2024/11/19 16:44:50 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_H
#define WRONG_CAT_H

#include "Animal.hpp"
#include "WrongAnimal.hpp"
class WrongCat : public WrongAnimal
{    
    public:
        WrongCat(const WrongCat &other);
        WrongCat& operator=(const WrongCat& other);
        WrongCat();
        ~WrongCat();
        void makeSound();
};
#endif