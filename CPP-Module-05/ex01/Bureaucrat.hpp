/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 11:37:46 by amejdoub          #+#    #+#             */
/*   Updated: 2025/01/06 11:37:46 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <string>
#include <iostream>
#include "Form.hpp"
class Form;
class Bureaucrat {
    public:
        
        Bureaucrat();
        Bureaucrat(int grade, const std::string name);

        
        ~Bureaucrat();

        
        Bureaucrat(const Bureaucrat& other);

        
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
        void signForm(Form f);
        void setGrade(int grade);
    private:
        const std::string _name;
        int _grade;
};
std::ostream& operator <<(std::ostream& os, const Bureaucrat& b );
#endif 
