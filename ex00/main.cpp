/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 11:54:25 by lgernido          #+#    #+#             */
/*   Updated: 2024/06/14 13:10:21 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
    {
        /*TESTING VECTORS*/
        
        std::vector<int> tab(10); 
        int value = 1; 
        std::fill(tab.begin(), tab.end(), value);
        
        /*Value that will be found*/
        std::vector<int>::iterator found = easyfind(tab, 1);
        if (found == tab.end())
            std::cout << RED BOLD "[+]Vector[+]   Error 404 Could not find" << RESET << std::endl;
        else
            std::cout << GREEN BOLD"[+]Vector[+]   Yeah " << *found << " appears for the first time at index " << found - tab.begin() << RESET << std::endl;
        
        /*Value that won't be found*/
        if (easyfind(tab, 210) == tab.end())
            std::cout << RED BOLD "[+]Vector[+]   Error 404 Could not find" << RESET << std::endl;
    }
    {
        /*TESTING LISTS*/
        
        std::list<int> tab(10);
        int value = 9;
        std::fill(tab.begin(), tab.end(), value);

        /*Value that will be found*/
        std::list<int>::iterator found = easyfind(tab, 9);
        if (found == tab.end())
            std::cout << RED BOLD "[+]List[+]     Error 404 Could not find" << RESET << std::endl;
        else
        {
            int index = std::distance(tab.begin(), found);
            std::cout << GREEN BOLD "[+]List[+]     Yeah " << *found << " appears for the first time at index " << index << RESET << std::endl;
        }
        
        /*Value that won't be found*/
        if (easyfind(tab,17) == tab.end())
            std::cout << RED BOLD "[+]List[+]     Error 404 Could not find" << RESET << std::endl;
    }
    {
        /*TESTING DEQUE*/
        
        std::deque<int> tab(10);
        int value = 9;
        std::fill(tab.begin(), tab.end(), value);

        /*Value that will be found*/
        std::deque<int>::iterator found = easyfind(tab, 9);
        if (found == tab.end())
            std::cout << RED BOLD "[+]Deque[+]    Error 404 Could not find" << RESET << std::endl;
        else
        {
            int index = std::distance(tab.begin(), found);
            std::cout << GREEN BOLD "[+]Deque[+]    Yeah " << *found << " appears for the first time at index " << index << RESET << std::endl;
        }
        
        /*Value that won't be found*/
        if (easyfind(tab,17) == tab.end())
            std::cout << RED BOLD "[+]Deque[+]    Error 404 Could not find" << RESET << std::endl;
    }
    {
        /*TESTING QUEUE*/
        
        std::queue<int> tab;
        int value = 10;
        
        for (int i = 0; i < 10; ++i) 
        {
            tab.push(value);
        }
        /*No iterator in queue container*/
        /*Value that will be found*/
        if (!easyfind(tab, 9)) 
            std::cout << RED BOLD "[+]Queue[+]   Error 404 Could not find" << RESET << std::endl;
        else 
            std::cout << GREEN BOLD "[+]Queue[+]   Yeah 9 appears in the queue" RESET << std::endl;
        /*Value that won't be found*/
        if (!easyfind(tab, 17)) 
            std::cout << RED BOLD "[+]Queue[+]   Error 404 Could not find" << RESET << std::endl;
    }

        return 0;
    }
        
    