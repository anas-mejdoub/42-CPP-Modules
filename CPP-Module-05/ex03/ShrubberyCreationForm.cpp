/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 11:34:10 by amejdoub          #+#    #+#             */
/*   Updated: 2025/01/06 11:34:10 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

// Constructor
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137) {
    _target = target;
}  

// Destructor
ShrubberyCreationForm::~ShrubberyCreationForm() {

    std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137)
{
    _target = "default";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) {
        setSigned_contract(other.getSigned_contract());
        _target = other._target;
}


ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
    if (this != &other) {
        setSigned_contract(other.getSigned_contract());
        _target = other._target;
    }
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const 
{
    if (executor.getGrade() > this->getExecuteGrade())
        throw ShrubberyCreationForm::GradeTooLowException();
    std::ofstream ofile(_target + "_shrubbery");
    if (!ofile.is_open())
    {
        std::cerr << "error while creating the output file." << std::endl;
        exit(1);
    }
    ofile << "v .   ._, |_  .,\n"
        << "           `-._\\/  .  \\ /    |/_\n"
        << "               \\\\  _\\, y | \\//\n"
        << "         _\\_.___\\\\, \\\\/ -.\\||\n"
        << "           `7-,--.`._||  / / ,\n"
        << "           /'     `-. `./ / |/_.'\n"
        << "                     |    |//\n"
        << "                     |_    /\n"
        << "                     |-   |\n"
        << "                     |   =|\n"
        << "                     |    |\n"
        << "--------------------/ ,  . \\--------._\n"
        << std::endl;
}