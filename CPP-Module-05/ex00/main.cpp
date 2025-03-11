/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 11:37:52 by amejdoub          #+#    #+#             */
/*   Updated: 2025/01/06 11:37:52 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat a(160, "anas");
        std::cout << a.getGrade() << std::endl;
        a.incerementGrade();
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}