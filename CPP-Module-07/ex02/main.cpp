/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 20:30:56 by amejdoub          #+#    #+#             */
/*   Updated: 2025/01/11 11:46:27 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <string>


int main()
{

    try 
    {
        Array<std::string> arr(6);
        
        Array<std::string> ar2(6);
        ar2[1] = "hello";
        
        arr = ar2;
        std::cout << arr.size() << std::endl;
        std::cout << arr[1] << std::endl;
        arr[1] = "welcome";
        std::cout << arr[1] << std::endl;
        std::cout << ar2[1] << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}