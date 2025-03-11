/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 11:36:56 by amejdoub          #+#    #+#             */
/*   Updated: 2025/01/06 11:36:56 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "AForm.hpp"
class AForm;
class PresidentialPardonForm : public AForm {
public:
    PresidentialPardonForm(std::string name);
    PresidentialPardonForm();

    ~PresidentialPardonForm();

    PresidentialPardonForm(const PresidentialPardonForm& other);

    PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
    void execute(Bureaucrat const & executor) const;
    private:
        std::string _target;
        
};

#endif 
