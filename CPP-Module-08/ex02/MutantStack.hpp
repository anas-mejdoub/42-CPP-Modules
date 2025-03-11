/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 16:25:22 by amejdoub          #+#    #+#             */
/*   Updated: 2025/01/11 16:25:22 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
template <typename T>
class MutantStack : public std::stack<T>
{
    public :
        MutantStack () : std::stack<T>(){}
        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        MutantStack(const MutantStack &other) : std::stack<T>(other)
        {
            (void)other;
        }
        MutantStack& operator=(const MutantStack &other)
        {
            if (this != &other)
            {
                this->c = other.c;
            }
            return *this;
        }
        iterator begin() 
        {
            return this->c.begin();
        }
        iterator end() 
        {
            return this->c.end();
        }
        const_iterator cend() const
        {
            return this->c.cend();
        }
        const_iterator cbegin() const
        {
            return this->c.cbegin();
        }
};