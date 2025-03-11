/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 18:59:55 by amejdoub          #+#    #+#             */
/*   Updated: 2025/01/28 12:00:27 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

bool allSpace(std::string s)
{
    for(size_t i = 0; i < s.length(); i++)
    {
        if (s[i] != ' ')
            return false;
    }
    return true;
}
bool validateStr(std::string s)
{
    for (size_t i = 0; i < s.length(); i++)
    {
        if (!isdigit(s[i]) && s[i] != '+' &&  s[i] != '-' && s[i] != '*' && s[i] != '/')
            return false;
    }
    return true;
}
bool isOperator(std::string s)
{
    if (s.length() == 1 && (s[0] == '/' || s[0] == '*' || s[0] == '+' || s[0] == '-'))
        return true;
    return false;
}

void RPN(std::string s)
{
    int sum = 0;
    std::stack<int>stack;
    while (true)
    {
        size_t pos = s.find(' ');
        if (allSpace(s))
            break;
        else
        {
            std::string res = s.substr(0, pos);
            if (!validateStr(res) || std::atoi(res.c_str()) > 9 || std::atoi(res.c_str()) < 0)
                throw std::invalid_argument("Invalid args in input string");
            s = s.substr(pos + 1, s.length());

            if (stack.size() && isOperator(res))
            {
                char c = res[0];
                int b = stack.top();
                stack.pop();
                if (!stack.size())
                    throw std::runtime_error("stack size is not valid");
                int a = stack.top();
                stack.pop();
                switch (c)
                {
                    case '+': sum = a + b; break;
                    case '-': sum = a - b; break;
                    case '*': sum = a * b; break;
                    case '/': 
                        if (b == 0) throw std::runtime_error("Division by zero");
                        sum = a / b; 
                        break;
                    default: throw std::runtime_error("Unknown operator");
                }
                stack.push(sum);
            }
            else
            {
                stack.push(std::atoi(res.c_str()));
            }
            if (std::string::npos == pos)
                break;
        }
    }
    if (stack.size() != 1)
        throw std::invalid_argument("input is invalid !");
    std::cout << stack.top() << std::endl;
}