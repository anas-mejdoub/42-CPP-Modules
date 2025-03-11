/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 11:37:17 by amejdoub          #+#    #+#             */
/*   Updated: 2025/01/06 11:37:17 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
#define AForm_HPP
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
class Bureaucrat;
class AForm {
public:
    // Constructor
    AForm();

    // Destructor
    virtual ~AForm();
    AForm(const std::string name, const int sign_grade,  const int execute_grade);
    // Copy Constructor
    AForm(const AForm& other);

    // Copy Assignment Operator
    AForm& operator=(const AForm& other);
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
    void setSigned_contract(bool a);
    bool getSigned_contract() const;
    virtual void execute(Bureaucrat const & executor) const = 0;
    private:
        const std::string _name;
        bool _signed_contract;
        const int _sign_grade;
        const int _execute_grade;
};
std::ostream& operator <<(std::ostream& os, const AForm& f);
#endif
