/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 16:25:09 by amejdoub          #+#    #+#             */
/*   Updated: 2025/01/11 16:25:09 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <vector>
int main()
{
    try
    {
        Span sp = Span(10);
        sp.addNumber(5);
        sp.addNumber(5);
        std::vector<int> c;
        c.push_back(-10);
        c.push_back(2);
        c.push_back(3);
        c.push_back(100);
    sp.addrange(c.begin(), c.end());
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    return 0;
}