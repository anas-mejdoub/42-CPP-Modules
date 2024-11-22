/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 16:23:20 by amejdoub          #+#    #+#             */
/*   Updated: 2024/09/22 17:10:14 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie *zombieHorde( int N, std::string name )
{
    Zombie *zombiesArr = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        zombiesArr[i].setName(name);
    }
    return zombiesArr;
}