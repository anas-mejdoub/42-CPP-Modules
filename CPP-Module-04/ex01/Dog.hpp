/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:36:12 by amejdoub          #+#    #+#             */
/*   Updated: 2024/11/09 13:30:02 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H
#include "Animal.hpp"
#include "Brain.hpp"
class Dog : public Animal
{
    public:
        Dog(const Dog &other);
        Dog& operator=(const Dog& other);
        Dog();
        ~Dog();
        void makeSound();
    private:
        Brain *_brain;
};

#endif