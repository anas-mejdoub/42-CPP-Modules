/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 19:43:20 by amejdoub          #+#    #+#             */
/*   Updated: 2024/10/23 11:47:06 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
#define POINT_H

#include "Fixed.hpp"
class Point 
{
    public :
        Point();
        Point(float a, float b);
        Point(const Point& other);
        Point& operator=(const Point &other);
        ~Point();
        Fixed getX() const;
        Fixed getY() const;
    private :
        Fixed x;
        Fixed y;
};
float area(Point const a, Point const b, Point const c);
bool bsp( Point const a, Point const b, Point const c, Point const p);

#endif