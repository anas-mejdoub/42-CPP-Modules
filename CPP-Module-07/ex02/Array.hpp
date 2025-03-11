/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 20:22:00 by amejdoub          #+#    #+#             */
/*   Updated: 2025/01/12 13:05:09 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
template <typename T>
class Array 
{
    private :
        T *array;
        unsigned int s;
    public :
        Array()
        {
            s = 0;
            array = NULL;
        }
        Array(unsigned int n)
        {
            array = new T[n];
            s = n;
        }
        ~Array()
        {
            delete[] array;
        }
        unsigned int size() const
        {
            return s;
        }
        T& operator[](int i)
        {
            if (i < 0 || static_cast<unsigned int>(i) >= s)
            {
                throw std::out_of_range("index out of bounds");
            }
            return array[i];
        }
        T& operator[](int i) const
        {
            if (i < 0 || static_cast<unsigned int>(i) >= s)
            {
                throw std::out_of_range("index out of bounds");
            }
            return array[i];
        }
        Array(Array &other)
        {
            if (this != &other)
            {
                this->s = other.size();
                this->array = new T[this->s];
                for (unsigned int i = 0; i < this->s; i++)
                {
                    this->array[i] = other.array[i];
                }
            }
        }
        Array<T>& operator=(Array &other)
        {
            if (this != &other)
            {
                delete[] array;
                this->s = other.size();
                this->array = new T[this->s];
                for (unsigned int i = 0; i < other.size(); i++)
                {
                    this->array[i] = other.array[i];
                }
            }
            return *this;
        }
};
