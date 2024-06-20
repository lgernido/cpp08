/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 14:02:09 by lgernido          #+#    #+#             */
/*   Updated: 2024/06/20 09:23:12 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
    {
        /*TEST FROM THE SUBJECT*/
        try
        {
            std::cout << UNDERLINE BOLD "Test from the subject" RESET << std::endl;
            std::cout << std::endl;
            Span sp = Span(5);
            sp.addNumber(6);
            sp.addNumber(3);
            sp.addNumber(17);
            sp.addNumber(9);
            sp.addNumber(11);
            std::cout << "Shortest span : "<< sp.shortestSpan() << std::endl;
            std::cout << "Longest span : " << sp.longestSpan() << std::endl;
            std::cout << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << RED << BOLD << e.what() << RESET << std::endl;
            std::cout << std::endl;
        }
    }
    {
        /*TEST WITH NEGATIVE NUMBER*/
        try
        {
            std::cout << UNDERLINE BOLD "Test with negative number" RESET << std::endl;
            std::cout << std::endl;
            Span sp = Span(5);
            sp.addNumber(6);
            sp.addNumber(3);
            sp.addNumber(-17);
            sp.addNumber(9);
            sp.addNumber(11);
            std::cout << "Shortest span: "<< sp.shortestSpan() << std::endl;
            std::cout << "Longest span: "<<  sp.longestSpan() << std::endl;
            std::cout << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << RED << BOLD << e.what() << RESET << std::endl;
            std::cout << std::endl;
        }
    }
    {
        /*TESTING RANGE OF ITERATORS TO FILL TAB*/
        try
        {
            std::cout << UNDERLINE BOLD "Test with range of iterators" RESET << std::endl;
            std::cout << std::endl;
            Span sp(10);

            sp.addNumber(1);
            sp.addNumber(2);
            sp.addNumber(3);

            int arr[] = {4, 5, 6, 7, 8};
            std::vector<int> more_numbers(arr, arr + sizeof(arr) / sizeof(arr[0]));
            sp.addNumbers(more_numbers.begin(), more_numbers.end());

            std::cout << "Shortest span: "<< sp.shortestSpan() << std::endl;
            std::cout << "Longest span : " << sp.longestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << RED << BOLD << e.what() << RESET << std::endl;
            std::cout << std::endl;
        }
    }
    return (0);
}