/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 15:45:19 by amejdoub          #+#    #+#             */
/*   Updated: 2025/01/08 12:29:39 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    (void)ac;
    if (av && av[1])
        ScalarConverter::convert(av[1]);
    else
        std::cout << "one argument needed !" << std::endl;
    return 0;
}