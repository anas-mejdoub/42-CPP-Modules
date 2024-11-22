/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:26:37 by amejdoub          #+#    #+#             */
/*   Updated: 2024/11/19 17:32:48 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
#include <string>
class Animal
{
    protected:
        std::string _type;
    public:
        Animal(const Animal &other);
        Animal& operator=(const Animal& other);
        Animal();
        virtual ~Animal();
        std::string getType();
        void virtual makeSound();
};




#endif