/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 11:37:03 by amejdoub          #+#    #+#             */
/*   Updated: 2025/01/06 11:37:03 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"



int main()
{
    try {

    Bureaucrat a(46, "anas");
    // ShrubberyCreationForm sh("test");
    ShrubberyCreationForm r("hehe");
    std::cout << r << std::endl;
    r.beSigned(a);
    a.signForm(r);
    a.executeForm(r);
    // a.incerementGrade();
    // std::cout << a.getGrade() << std::endl;
    // std::cout << "YO" << std::endl;
    // AForm f("anas", true, 5, 6);
    // f.beSigned(a);
    // a.signAForm(f);
    // std::cout << f;
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}