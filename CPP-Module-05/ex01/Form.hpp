/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 11:37:27 by amejdoub          #+#    #+#             */
/*   Updated: 2025/01/06 11:37:27 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
class Bureaucrat;
class Form {
public:
    // Constructor
    Form();

    // Destructor
    ~Form();
    Form(const std::string name, const int sign_grade,  const int execute_grade);
    // Copy Constructor
    Form(const Form& other);

    // Copy Assignment Operator
    Form& operator=(const Form& other);
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
    const std::string& getName() const;
    bool isSigned() const;
    int getSignGrade() const;
    int getExecuteGrade() const;
    void beSigned(Bureaucrat b);
    private:
        const std::string _name;
        bool _signed_contract;
        const int _sign_grade;
        const int _execute_grade;

};
std::ostream& operator <<(std::ostream& os, const Form& f);
#endif
