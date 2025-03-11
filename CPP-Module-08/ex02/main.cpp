/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 17:04:07 by amejdoub          #+#    #+#             */
/*   Updated: 2025/01/13 13:19:55 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"


int main()
{
    MutantStack<int> s;

    s.push(10);
    s.push(20);
    MutantStack<int>::iterator it = s.begin();
    it++;
    std::cout << s.top() << std::endl;
    std::cout << *it << std::endl;
    MutantStack<int > s2(s);
    std::cout << s2.top() << std::endl;
    s.push(40);
    std::cout << s2.top() << std::endl;
    std::cout << s.top() << std::endl;
    s2 = s;
    std::cout << s2.top() << std::endl;
    std::cout << s.top() << std::endl;
    return 0;
}