/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:24:10 by amejdoub          #+#    #+#             */
/*   Updated: 2024/10/28 17:38:21 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl member;
    if (ac > 2 || ac < 2)
        std::cout << "requires one argument !" << std::endl;
    else
        member.complain(av[1]);
    return 0;
}
