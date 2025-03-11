/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 11:34:20 by amejdoub          #+#    #+#             */
/*   Updated: 2025/01/06 11:34:20 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"


int main()
{
    try {

    Intern  someRandomIntern;
    Form*   rrf;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    Bureaucrat a(44, "anas");
    rrf->beSigned(a);
    // // ShrubberyCreationForm sh("test");
    // RobotomyRequestForm r("hehe");
    // r.beSigned(a);
    a.signForm(*rrf);
    a.executeForm(*rrf);
    // // a.incerementGrade();
    // // std::cout << a.getGrade() << std::endl;

    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}