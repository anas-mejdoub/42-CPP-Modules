/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 11:34:03 by amejdoub          #+#    #+#             */
/*   Updated: 2025/01/06 11:34:03 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45) {
    _target = target;
}
RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45) {
    _target = "default";
}


RobotomyRequestForm::~RobotomyRequestForm() {

}


RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) {

    setSigned_contract(other.getSigned_contract());
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
    if (this != &other) {
        setSigned_contract(other.getSigned_contract());
    }
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > this->getExecuteGrade())
        throw RobotomyRequestForm::GradeTooLowException();
    std::cout << "AGHHHHHH some drilling noises" << std::endl;
    std::srand(std::time(0));
    int n = std::rand() % 101;
    if (n < 50)
    {
        std::cout << _target << " has been robotomized successfully" << std::endl;
    }
    else
    {
        std::cout << _target << " the robotomy failed." << std::endl;

    }

}