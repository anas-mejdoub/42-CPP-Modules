/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 19:49:47 by amejdoub          #+#    #+#             */
/*   Updated: 2024/11/09 18:52:13 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BRAIN_H
#define BRAIN_H
#include <iostream>
#include <string>

class Brain
{
    protected:
        std::string _type;
    public:
        Brain(const Brain &other);
        Brain& operator=(const Brain& other);
        Brain();
        ~Brain();
        std::string ideas[100];
};

#endif