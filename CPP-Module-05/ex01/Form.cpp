/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 11:37:39 by amejdoub          #+#    #+#             */
/*   Updated: 2025/01/06 11:37:39 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("default"), _sign_grade(1),  _execute_grade(1) {
    _signed_contract = false;

}

Form::~Form() {

}

Form::Form(const Form& other) : _name(other._name), _sign_grade(other._sign_grade),  _execute_grade(other._execute_grade) {
        _signed_contract = other._signed_contract;

}

Form& Form::operator=(const Form& other) {
    if (this != &other) {
        _signed_contract = other._signed_contract;
    
    }
    return *this;
}

Form::Form(const std::string name, const int sign_grade,  const int execute_grade) : _name(name), _sign_grade(sign_grade), _execute_grade(execute_grade)
{
    _signed_contract = false;
    if (_sign_grade < 1 || _execute_grade < 1)
        throw Form::GradeTooHighException();
    if (_sign_grade > 150 || _execute_grade > 150)
        throw Form::GradeTooLowException();
}

const char *Form::GradeTooHighException::what() const throw(){

    return "Form grade too high !";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Form grade too low !";
}

const std::string& Form::getName() const {
    return _name;
}

bool Form::isSigned() const {
    return _signed_contract;
}

int Form::getSignGrade() const {
    return _sign_grade;
}

int Form::getExecuteGrade() const {
    return _execute_grade;
}

std::ostream& operator<<(std::ostream& os, const Form& f)
{
    os << "Form Name: " << f.getName() << "\n"
        << "Signed: " << (f.isSigned() ? "Yes" : "No") << "\n"
        << "Sign Grade: " << f.getSignGrade() << "\n"
        << "Execute Grade: " << f.getExecuteGrade() << "\n";
    return os;
}
void Form::beSigned(Bureaucrat b)
{
    if (b.getGrade() > _sign_grade)
    {
        throw Form::GradeTooLowException();
    }
    _signed_contract = true;
    
}