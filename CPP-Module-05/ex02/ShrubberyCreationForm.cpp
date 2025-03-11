/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 11:36:45 by amejdoub          #+#    #+#             */
/*   Updated: 2025/01/06 11:36:45 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137) {
    _target = target;
}  
ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137) {
    _target = "default";
}  


ShrubberyCreationForm::~ShrubberyCreationForm() {

    std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}


ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm("ShrubberyCreationForm", 145, 137) {
        setSigned_contract(other.getSigned_contract());
        _target = other._target;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
    if (this != &other) {
        _target = other._target;
        setSigned_contract(other.getSigned_contract());
    }
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const 
{
    if (executor.getGrade() > this->getExecuteGrade())
    {
        throw ShrubberyCreationForm::GradeTooLowException();
    }
    std::string str = _target + "_shrubbery";
    std::ofstream ofile(str.c_str());
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