/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:32:37 by amejdoub          #+#    #+#             */
/*   Updated: 2024/11/20 12:32:19 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

int main()
{
    int num = 10;
    if (num <= 0)
    {
        std::cout << "positive numbers only" << std::endl;
        return 1;
    }
    Animal* ArrayAnimals[num];
    for (int i = 0; i < num; i++)
    {
        if (i < num / 2)
            ArrayAnimals[i] = new Cat();
        else
            ArrayAnimals[i] = new Dog();
    }
    
    for (int i = 0; i < num; i++)
    {
        delete ArrayAnimals[i];
    }
    return 0;
}