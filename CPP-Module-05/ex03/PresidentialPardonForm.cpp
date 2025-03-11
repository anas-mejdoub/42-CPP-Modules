/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 11:33:54 by amejdoub          #+#    #+#             */
/*   Updated: 2025/01/06 11:33:54 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form ("PresidentialPardonForm", 25, 5) {
    _target = target;
}
PresidentialPardonForm::PresidentialPardonForm() : Form ("PresidentialPardonForm", 25, 5) {
    _target = "default";
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : Form ("PresidentialPardonForm", 25, 5) {
    setSigned_contract(other.getSigned_contract());
    _target = other._target;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
    if (this != &other) {
        setSigned_contract(other.getSigned_contract());
        _target = other._target;
    }
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > this->getExecuteGrade())
        throw PresidentialPardonForm::GradeTooLowException();
    std::cout <<  _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

