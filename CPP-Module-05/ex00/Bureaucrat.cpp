/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 11:37:58 by amejdoub          #+#    #+#             */
/*   Updated: 2025/01/06 11:37:58 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat() {
    
}
Bureaucrat::Bureaucrat(int grade, const std::string name) : _name(name) {
    setGrade(grade);
}


Bureaucrat::~Bureaucrat() {

}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name){

    _grade = other._grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other){
    if (this != &other) {
        _grade = other._grade;
    }
    return *this;
}

int Bureaucrat::getGrade() const
{
    return _grade;
}

const std::string Bureaucrat::getName() const
{
    return _name;
}

void Bureaucrat::incerementGrade()
{
    setGrade(_grade - 1);
}
void Bureaucrat::decerementGrade()
{
    setGrade(_grade + 1);

}

const char *Bureaucrat::GradeTooHighException::what() const throw(){

    return "grade too high !";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "grade too low !";
}

void Bureaucrat::setGrade(int grade)
{
        if (grade < 1)
            throw Bureaucrat::GradeTooHighException();
        else if (grade > 150)
            throw Bureaucrat::GradeTooLowException();
        _grade = grade;
}

std::ostream& operator <<(std::ostream& os, const Bureaucrat& b)
{

    os << b.getName() << ",  bureaucrat grade " << b.getGrade() << std::endl;
    return os;
}