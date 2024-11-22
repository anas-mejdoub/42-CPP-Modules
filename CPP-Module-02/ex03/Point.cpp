/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 19:43:30 by amejdoub          #+#    #+#             */
/*   Updated: 2024/10/23 11:47:47 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
{
    
}

Point::Point(float a, float b) : x(a), y(b) {}

Point::Point(const Point& other)
{
    this->x = other.x;
    this->y = other.y;
}

Point& Point::operator=(const Point &other)
{
    if (this != &other)
    {
        this->x = other.x;
        this->y = other.y;
    }
    return *this;
}

Point::~Point()
{
    // std::cout<< "object removed" << std::endl;
}

Fixed Point::getX() const
{
    return this->x;
}
Fixed Point::getY() const
{
    return this->y;
}