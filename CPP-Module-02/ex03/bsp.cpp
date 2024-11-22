/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:55:50 by amejdoub          #+#    #+#             */
/*   Updated: 2024/11/03 12:11:36 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float area(Point const a, Point const b, Point const c)
{
    return 0.5 * ((a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat())) + (b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat())) + (c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat())));
}

float myFabs(float a)
{
    return a < 0 ? -a : a;
}
bool bsp( Point const a, Point const b, Point const c, Point const p)
{
    float pab = myFabs(area(p, a, b));
    float pac = myFabs(area(p, a, c));
    float pcb = myFabs(area(p, c, b));
    float abc = myFabs(area(a, b, c));
    if ((pab + pac + pcb) - abc == 0)
        return true;
    return false;
}

