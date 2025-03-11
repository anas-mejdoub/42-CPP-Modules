/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 16:25:17 by amejdoub          #+#    #+#             */
/*   Updated: 2025/01/13 14:34:03 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <vector>

class Span {
    public:
        
        Span();
        Span(unsigned int N);
        ~Span();
        Span(const Span& other);
        class NoSpaceLeftException : public std::exception
        {
            const char* what() const throw();
        };
        class SpanSizeException : public std::exception
        {
            const char * what() const throw();
        };
        template <typename T>
        void addrange(T first, T last)
        {
            if (_N -_c.size() < static_cast<unsigned int> (std::distance(first, last)))
                throw Span::NoSpaceLeftException();
        _c.insert(_c.end(), first, last);
        }
        Span& operator=(const Span& other);
        void addNumber(int n);
        int shortestSpan();
        int longestSpan();
    private:
        unsigned int _N;
        std::vector<int> _c;

};

#endif 
