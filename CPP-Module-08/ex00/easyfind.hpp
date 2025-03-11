/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 16:24:57 by amejdoub          #+#    #+#             */
/*   Updated: 2025/01/11 16:24:57 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T>

int easyfind(T container, int n)
{
    typename T::iterator it;
    it = std::find(container.begin(), container.end(), n);
    if (it == container.end())
        throw std::out_of_range("Value not found");
    return *it;
}