/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:24:27 by amejdoub          #+#    #+#             */
/*   Updated: 2024/10/28 17:36:46 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>

class Harl
{
    public :
        Harl();
        ~Harl();
        void complain(std::string level);
    private :
    void  (Harl::*ptrFun[4])(void );
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
};

#endif 