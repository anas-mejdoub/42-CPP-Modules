/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 13:13:49 by amejdoub          #+#    #+#             */
/*   Updated: 2024/10/28 16:48:29 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
int main()
{
    Zombie *zombieArr = zombieHorde(3, "test");
    for (int i = 0; i < 3; i++)
    {
        zombieArr[i].announce();
    }
    delete[] zombieArr;
    return 0;
}