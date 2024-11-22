/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:32:37 by amejdoub          #+#    #+#             */
/*   Updated: 2024/11/19 17:13:55 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    WrongCat *c = new WrongCat();
    c->makeSound();
    Animal *animal = new Animal();
    animal->makeSound();
    Animal *test = new Cat();
    Animal *taha = new Dog();
    taha->makeSound();
    test->makeSound();
    std::cout << test->getType() << std::endl;
    delete taha;
    delete test;
    delete animal;
    delete c;
    return 0;
}