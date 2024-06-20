/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 11:18:52 by lgernido          #+#    #+#             */
/*   Updated: 2024/06/19 10:41:03 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

/*****************************************************************************/
/*                                  INCLUDES                                 */
/*****************************************************************************/
#include <string>
#include <iostream>
#include <cctype>
#include <exception>
#include <stack>
#include <deque>
#include <iterator>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <list>

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

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
    public:
        MutantStack(void) : std::stack<T, Container>() {};
        MutantStack(MutantStack const & src) : std::stack<T, Container>(src) 
        {
            *this = src;
        };
        MutantStack &operator=(MutantStack const &src) 
        {
            std::stack<T, Container>::operator=(src);
            return *this;
        }
        ~MutantStack() 
        {
            std::cout << "Destructor called" << std::endl;
        };
        
        typedef typename Container::iterator iterator;
        typedef typename Container::const_iterator const_iterator;
        typedef typename Container::reverse_iterator reverse_iterator;
        typedef typename Container::const_reverse_iterator const_reverse_iterator;
        iterator begin(void) 
        {
            return this->c.begin();
        }
        iterator end(void) 
        {
            return this->c.end();
        }
        reverse_iterator rbegin() 
        {
            return this->c.rbegin();
        }

        reverse_iterator rend() 
        {
            return this->c.rend();
        }

        const_iterator cbegin() const 
        {
            return this->c.cbegin();
        }

        const_iterator cend() const 
        {
            return this->c.cend();
        }

        const_reverse_iterator crbegin() const 
        {
            return this->c.crbegin();
        }

        const_reverse_iterator crend() const 
        {
            return this->c.crend();
        }
    
    private :
};

#endif