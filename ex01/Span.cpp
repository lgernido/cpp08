/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 09:43:03 by lgernido          #+#    #+#             */
/*   Updated: 2024/06/20 09:18:15 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*****************************************************************************/
/*                            CONSTRUCTORS                                   */
/*****************************************************************************/

Span::Span(unsigned int N) : N(N)
{
    this->tab.reserve(N);
}

Span::Span(const Span &other) : N(other.N)
{
    *this = other;
}

Span& Span::operator=(const Span &other)
{
    N = other.N;
    tab = other.tab;
    return *this;   
}


/*****************************************************************************/
/*                            PUBLIC METHODS                                 */
/*****************************************************************************/

void Span::addNumber(int nb)
{
    if (this->tab.size() == this->N)
        throw Span::SpanIsFull();
    this->tab.push_back(nb);
}

int Span::shortestSpan(void)
{
    std::vector<int>    tabSorted;

    if (this->tab.size() <= 1)
        throw Span::WrongContainer();
    tabSorted = this->tab;
    std::sort(tabSorted.begin(), tabSorted.end());
    int span = tabSorted[1] - tabSorted[0];
    for (std::vector<int>::size_type i = 0, j = 1; j < tabSorted.size(); i++, j++)
    {
        int new_span = tabSorted[j] - tabSorted[i];
        if (new_span < span)
            span = new_span; 
    }
    return (span);
}

int Span::longestSpan(void)
{
    std::vector<int>    tabSorted;

    if (this->tab.size() <= 1)
        throw Span::WrongContainer();
    tabSorted = this->tab;
    std::sort(tabSorted.begin(), tabSorted.end());
    return tabSorted[tabSorted.size() - 1] - tabSorted[0];
}

unsigned int Span::getN()
{
    return(this->N);
}