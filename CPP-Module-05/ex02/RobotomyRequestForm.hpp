/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 11:36:48 by amejdoub          #+#    #+#             */
/*   Updated: 2025/01/06 11:36:48 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "AForm.hpp"
class AForm;
class RobotomyRequestForm : public AForm {
public:
    // Constructor
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm();

    // Destructor
    ~RobotomyRequestForm();

    // Copy Constructor
    RobotomyRequestForm(const RobotomyRequestForm& other);

    // Copy Assignment Operator
    RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
    void execute(Bureaucrat const & executor) const;
    private :
        std::string _target;
};

#endif // ROBOTOMYREQUESTFORM_HPP
