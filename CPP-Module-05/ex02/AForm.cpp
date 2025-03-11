/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 11:37:20 by amejdoub          #+#    #+#             */
/*   Updated: 2025/01/06 11:37:20 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"


AForm::AForm() : _name("default"), _sign_grade(1),  _execute_grade(1) {
    _signed_contract = false;
}

// Destructor
AForm::~AForm() {
    
}

// Copy Constructor
AForm::AForm(const AForm& other) : _name(other._name), _sign_grade(other._sign_grade) , _execute_grade(other._execute_grade){
        _signed_contract = other._signed_contract;

}

// Copy Assignment Operator
AForm& AForm::operator=(const AForm& other) {
    if (this != &other) {
        _signed_contract = other._signed_contract;

    }
    return *this;
}

AForm::AForm(const std::string name, const int sign_grade,  const int execute_grade) : _name(name), _sign_grade(sign_grade), _execute_grade(execute_grade)
{
    _signed_contract = false;
    if (_sign_grade < 1 || _execute_grade < 1)
        throw AForm::GradeTooHighException();
    if (_sign_grade > 150 || _execute_grade > 150)
        throw AForm::GradeTooLowException();
}

const char *AForm::GradeTooHighException::what() const throw(){

    return "AForm grade too high !";
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return "AForm grade too low !";
}

const std::string& AForm::getName() const {
    return _name;
}

bool AForm::isSigned() const {
    return _signed_contract;
}

int AForm::getSignGrade() const {
    return _sign_grade;
}

int AForm::getExecuteGrade() const {
    return _execute_grade;
}

std::ostream& operator<<(std::ostream& os, const AForm& f)
{
    os << "AForm Name: " << f.getName() << "\n"
        << "Signed: " << (f.isSigned() ? "Yes" : "No") << "\n"
        << "Sign Grade: " << f.getSignGrade() << "\n"
        << "Execute Grade: " << f.getExecuteGrade() << "\n";
    return os;
}
void AForm::beSigned(Bureaucrat b)
{
    if (b.getGrade() > _sign_grade)
    {
        throw AForm::GradeTooLowException();
    }
    _signed_contract = true;
    
}

void AForm::setSigned_contract(bool a)
{
    _signed_contract = a;
}

bool AForm::getSigned_contract() const
{
    return _signed_contract;
}