/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 11:34:23 by amejdoub          #+#    #+#             */
/*   Updated: 2025/01/06 11:34:23 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
class ShrubberyCreationForm;
class PresidentialPardonForm;
class RobotomyRequestForm;
class Form;
class Intern {
    public:
        
        Intern();

        
        ~Intern();

        
        Intern(const Intern& other);

        
        Intern& operator=(const Intern& other);
        Form* createSh(std::string target);
        Form* createRo(std::string target);
        Form* createPre(std::string target);
        Form* makeForm(std::string nameForm, std::string target);
};

#endif 
