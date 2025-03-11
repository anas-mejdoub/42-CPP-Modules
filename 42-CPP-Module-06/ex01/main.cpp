/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 15:51:11 by amejdoub          #+#    #+#             */
/*   Updated: 2025/01/07 17:14:15 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Serializer.hpp"

int main()
{
    Data *d = new Data();
    d->a = 65;
    d->b = 66;
    uintptr_t i = Serializer::serialize(d);
    Data * n = Serializer::deserialize(i);
    std::cout << i << std::endl;
    std::cout << n << std::endl;
    delete d;
    return 0;
}