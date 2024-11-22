/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:32:37 by amejdoub          #+#    #+#             */
/*   Updated: 2024/11/20 12:39:19 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

int main()
{
    Cat *ptr = new Cat();
    ptr->makeSound();
    Animal *a = new Dog();
    a->makeSound();
    delete a;
    delete ptr;
    
    return 0;
}