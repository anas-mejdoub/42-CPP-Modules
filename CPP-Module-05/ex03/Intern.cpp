/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 11:34:27 by amejdoub          #+#    #+#             */
/*   Updated: 2025/01/06 11:34:27 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


Intern::Intern() {

}


Intern::~Intern() {

}


Intern::Intern(const Intern& other) {
    (void)other;
}


Intern& Intern::operator=(const Intern& other) {
    (void)other;
    return *this;
}

Form* Intern::makeForm(std::string nameForm, std::string target)
{
    std::string arr[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};

    int i;
    Form* (Intern::*ptr[3])(std::string) = {&Intern::createSh, &Intern::createRo, &Intern::createPre};

    for (i = 0; i < 3; i++)
    {
        if (nameForm == arr[i])
            return (this->*ptr[i])(target);
    }
    std::cout << "form not found !" << std::endl;
    return NULL;
}

Form* Intern::createSh(std::string target)
{
    return new ShrubberyCreationForm(target);
}
Form* Intern::createRo(std::string target)
{
    return new RobotomyRequestForm(target);
}
Form* Intern::createPre(std::string target)
{
    return new PresidentialPardonForm(target);
}