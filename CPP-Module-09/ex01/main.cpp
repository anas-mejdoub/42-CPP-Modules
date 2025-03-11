/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 19:00:58 by amejdoub          #+#    #+#             */
/*   Updated: 2025/01/25 17:19:49 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "the program takes one argument !" << std::endl;
        exit(1);
    }
    try
    {
        RPN(av[1]);
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}