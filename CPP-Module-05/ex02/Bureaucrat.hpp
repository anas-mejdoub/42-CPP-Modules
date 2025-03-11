/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 11:37:06 by amejdoub          #+#    #+#             */
/*   Updated: 2025/01/06 11:37:08 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <string>
#include <iostream>
#include "AForm.hpp"
class AForm;
class Bureaucrat {
    public:
        // Constructor
        Bureaucrat();
        Bureaucrat(int grade, const std::string name);

        // Destructor
        ~Bureaucrat();

        // Copy Constructor
        Bureaucrat(const Bureaucrat& other);

        // Copy Assignment Operator
        Bureaucrat& operator=(const Bureaucrat& other);
        
        void incerementGrade();
        void decerementGrade();

        const std::string getName() const;
        int getGrade() const;
        class GradeTooHighException : public std::exception
        {
            public :
                const char *what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public :
                const char *what() const throw();
        };
        void signForm(AForm &f);
        void setGrade(int grade);
        void executeForm(AForm const & form);
    private:
        const std::string _name;
        int _grade;
};
std::ostream& operator <<(std::ostream& os, const Bureaucrat& b );
#endif 
