/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 18:30:50 by amejdoub          #+#    #+#             */
/*   Updated: 2025/01/10 16:45:26 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma  once

#include <iostream>

template <typename T>
void swap(T &a, T &b)
{

    T tmp;
    tmp = b;
    b = a;
    a = tmp;
}

template <typename T>
T min(T a, T b)
{
    if (a < b)
        return a;
    return b;
}
template <typename T>
T max(T a, T b)
{
    return a > b ? a : b;
}