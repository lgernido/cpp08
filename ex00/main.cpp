/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 11:54:25 by lgernido          #+#    #+#             */
/*   Updated: 2024/06/20 08:35:57 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
    {
        /*TESTING VECTORS*/
        std::cout << BLUE BOLD "|VECTORS|" RESET << std::endl;
        std::cout << std::endl;
        
        std::vector<int> tab(10); 
        int value = 1; 
        std::fill(tab.begin(), tab.end(), value);
        
        /*Value that will be found*/
        std::vector<int>::iterator found = easyfind(tab, 1);
        if (found == tab.end())
            std::cout << RED BOLD "Number not found" << RESET << std::endl;
        else
            std::cout << GREEN BOLD << *found << " appears for the first time at index " << found - tab.begin() << RESET << std::endl;
        
        /*Value that won't be found*/
        if (easyfind(tab, 210) == tab.end())
            std::cout << RED BOLD "Number not found" << RESET << std::endl;
        std::cout << std::endl;
    }
    {
        /*TESTING LISTS*/
        
        std::cout << BLUE BOLD "|LISTS|" RESET << std::endl;
        std::cout << std::endl;
        std::list<int> tab(5);
        int value = 9;
        std::fill(tab.begin(), tab.end(), value);


        /*Value that will be found*/
        std::list<int>::iterator found = easyfind(tab, 9);
        if (found == tab.end())
            std::cout << RED BOLD "Number not found" << RESET << std::endl;
        else
        {
            int index = std::distance(tab.begin(), found);
            std::cout << GREEN BOLD << *found << " appears for the first time at index " << index << RESET << std::endl;
        }
        
        /*Value that won't be found*/
        if (easyfind(tab,17) == tab.end())
            std::cout << RED BOLD "Number not found" << RESET << std::endl;
        std::cout << std::endl;
    }
    {
        /*TESTING DEQUE*/
        
        std::cout << BLUE BOLD "|DEQUE|" RESET << std::endl;
        std::cout << std::endl;
        std::deque<int> tab(10);
        int value = 9;
        std::fill(tab.begin(), tab.end(), value);

        /*Value that will be found*/
        std::deque<int>::iterator found = easyfind(tab, 9);
        if (found == tab.end())
            std::cout << RED BOLD "Number not found" << RESET << std::endl;
        else
        {
            int index = std::distance(tab.begin(), found);
            std::cout << GREEN BOLD << *found << " appears for the first time at index " << index << RESET << std::endl;
        }
        
        /*Value that won't be found*/
        if (easyfind(tab,17) == tab.end())
            std::cout << RED BOLD "Number not found" << RESET << std::endl;
        std::cout << std::endl;
    }

        return 0;
}
        
    