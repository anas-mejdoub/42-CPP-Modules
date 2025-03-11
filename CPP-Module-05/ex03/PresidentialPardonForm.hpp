/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 11:33:58 by amejdoub          #+#    #+#             */
/*   Updated: 2025/01/06 11:33:58 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "AForm.hpp"
class Form;
class PresidentialPardonForm : public Form {
public:
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm();

    ~PresidentialPardonForm();

    PresidentialPardonForm(const PresidentialPardonForm& other);

    PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
    void execute(Bureaucrat const & executor) const;
    private:
        std::string _target;
        
};

#endif 
