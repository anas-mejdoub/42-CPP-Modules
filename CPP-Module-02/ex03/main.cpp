/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 16:28:07 by amejdoub          #+#    #+#             */
/*   Updated: 2024/11/09 15:10:44 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

#include <iostream>

int main()
{
    Point a(0, 0);
    Point b(50, 0.0f);
    Point c(0, 50.0);
    Point p1(5, 5);
    std::cout << (bsp(a, b, c, p1) ? "Inside" : "Outside") << std::endl;
	return 0;
}
