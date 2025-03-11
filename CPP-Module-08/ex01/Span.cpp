/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejdoub <amejdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 16:25:12 by amejdoub          #+#    #+#             */
/*   Updated: 2025/01/13 15:37:08 by amejdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


Span::Span() {
    _N = 0;
}


Span::~Span() {

}


Span::Span(const Span& other) {
        _c = other._c;
        _N = other._N;
}


Span& Span::operator=(const Span& other) {
    if (this != &other) {
        _c = other._c;
        _N = other._N;
    }
    return *this;
}

Span::Span(unsigned int N)
{
    _N = N;
}

void Span::addNumber(int n)
{
    if (_c.size() >= _N)
    {
        throw Span::NoSpaceLeftException();
    }
    _c.push_back(n);
}

int Span::shortestSpan()
{
    if (_c.empty() || _c.size() == 1)
        throw Span::SpanSizeException();
        
    std::vector<int > tmp = _c;
    std::sort(tmp.begin(), tmp.end());
    if (_c.size() == 2)
        return tmp[1] - tmp[0];
    int min = 2147483647;
    for (std::vector<int>::iterator it = tmp.begin(); it != tmp.end() - 1; it++)
    {
        if (*(it + 1) - *it < min &&  *(it + 1) - *it != 0)
            min = *(it + 1) - *it;
    }
    return min;
}

int Span::longestSpan()
{
    if (_c.empty() || _c.size() == 1)
        throw Span::SpanSizeException();
    int min = *std::min_element(_c.begin(), _c.end());
    int max = *std::max_element(_c.begin(), _c.end());
    return max - min;
}

const char * Span::NoSpaceLeftException::what() const throw()
{
    return "no space left on the span !";
}
const char * Span::SpanSizeException::what() const throw()
{
    return "span size is not operational for finding 'span'";
}
