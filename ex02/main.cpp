/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 11:22:41 by lgernido          #+#    #+#             */
/*   Updated: 2024/06/20 09:16:22 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    {
        /*TEST FROM THE SUBJECT*/
        std::cout << UNDERLINE BOLD "Test from the subject" RESET << std::endl;
        std::cout << std::endl;
        MutantStack<int> mstack;
        
        mstack.push(5);
        mstack.push(17);
        
        std::cout << "Number on top : "<< mstack.top() << std::endl;
        
        mstack.pop();
        std::cout << "Size of the stack : " << mstack.size() << std::endl;
        
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);
        
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        
        ++it;
        --it;
        
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::stack<int> s(mstack);
    }
    {
        /*TESTING WITH A LIST*/
        std::cout << std::endl;
        std::cout << UNDERLINE BOLD "Test with a list" RESET << std::endl;
        std::cout << std::endl;
        MutantStack<int, std::list<int> > mstack;

        mstack.push(1);
        mstack.push(2);
        mstack.push(3);

        for (MutantStack<int, std::list<int> >::iterator it = mstack.begin(); it != mstack.end(); ++it) 
        {
            std::cout << *it << std::endl;
        }
        std::cout << std::endl;
        std::cout << UNDERLINE BOLD "Reverse iterators" RESET << std::endl;
        for (MutantStack<int, std::list<int> >::reverse_iterator it = mstack.rbegin(); it != mstack.rend(); ++it) 
        {
            std::cout << *it << std::endl;
        }

    }
    return 0;
}