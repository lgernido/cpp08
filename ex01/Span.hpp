/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 09:42:57 by lgernido          #+#    #+#             */
/*   Updated: 2024/06/18 09:34:20 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

/*****************************************************************************/
/*                                  INCLUDES                                 */
/*****************************************************************************/
#include <string>
#include <iostream>
#include <cctype>
#include <exception>
#include <vector>
#include <iterator>
#include <algorithm>
#include <cstdlib>
#include <ctime>

/*****************************************************************************/
/*                                  COLORS                                   */
/*****************************************************************************/

#define RED		"\033[0;31m"
#define GREEN	"\033[0;32m"
#define YELLOW	"\033[0;33m"
#define ORANGE "\033[38;5;208m"
#define BLUE	"\033[0;34m"
#define MAGENTA	"\033[0;35m"
#define CYAN	"\033[0;36m"
#define WHITE	"\033[0;37m"
#define BOLD       "\033[1m"
#define UNDERLINE  "\033[4m"
#define ITALIC     "\033[3m"
#define RESET      "\033[0m"


/*****************************************************************************/
/*                                  CLASS                                    */
/*****************************************************************************/

class Span
{
    public :
        Span(){};
        ~Span(){};

        Span(unsigned int N);
        
        Span(const Span &other);
        Span &operator=(const Span &other);
        
        void addNumber(int nb);
        int shortestSpan(void);
        int longestSpan(void);

        unsigned int getN(void);

        class SpanIsFull : public std::exception 
        {
            public:
                virtual const char *what() const throw() 
                {
                    return ("Span: Vector is already full");
                }
        };

        class WrongContainer : public std::exception 
        {
            public:
                virtual const char *what() const throw() 
                {
                    return ("Span: Can't compute a span for this vector");
                }
        };

    private :
        unsigned int N;
        std::vector<int> tab;

    protected :
};

/*****************************************************************************/
/*                                  TEMPLATES                                */
/*****************************************************************************/

template<typename T>
typename T::iterator fill_tab(T &container, int nb)
{
    for (int i = 0; i < nb; i++)
    {
        std::srand(std::time(NULL));
        int random_number = std::rand() % 100;
        container.addNumber(random_number);        
    }
    return (container.end());
}

#endif