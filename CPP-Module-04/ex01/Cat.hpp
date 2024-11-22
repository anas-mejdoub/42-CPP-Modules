/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:41:41 by amejdoub          #+#    #+#             */
/*   Updated: 2024/11/09 13:31:03 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"
class Cat : public Animal
{
    public:
        Cat(const Cat &other);
        Cat& operator=(const Cat& other);
        Cat();
        ~Cat();
        void makeSound();
    private:
        Brain *_brain;
};
#endif