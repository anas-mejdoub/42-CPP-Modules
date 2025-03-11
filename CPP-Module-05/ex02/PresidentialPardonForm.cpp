/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 11:36:59 by amejdoub          #+#    #+#             */
/*   Updated: 2025/01/06 11:36:59 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm ("PresidentialPardonForm", 25, 5) {
    _target = target;
}
PresidentialPardonForm::PresidentialPardonForm() : AForm ("PresidentialPardonForm", 25, 5) {
    _target = "default";
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : AForm("PresidentialPardonForm", 25, 5) {
    this->setSigned_contract(other.getSigned_contract());
        
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
    if (this != &other) {
        this->setSigned_contract(other.getSigned_contract());
        _target = other._target;
    }
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > this->getExecuteGrade())
    {
        throw PresidentialPardonForm::GradeTooLowException();
    }
    std::cout <<  _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

