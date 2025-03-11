/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 11:36:42 by amejdoub          #+#    #+#             */
/*   Updated: 2025/01/06 11:36:42 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "AForm.hpp"
#include <fstream>

class AForm;
class ShrubberyCreationForm : public AForm {
    public:
        // Constructor
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm();

        // Destructor
        ~ShrubberyCreationForm();

        // Copy Constructor
        ShrubberyCreationForm(const ShrubberyCreationForm& other);

        // Copy Assignment Operator
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
        void execute(Bureaucrat const & executor) const;
    private:
        std::string _target;
};

#endif
