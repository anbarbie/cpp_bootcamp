/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 11:46:40 by antbarbi          #+#    #+#             */
/*   Updated: 2023/01/24 13:10:46 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include "color.hpp"

int	main()
{
	std::cout << BOLDBLUE << "Test 1 : Given main" << RESET << std::endl;
	{
		try
		{
			Span sp = Span(5);
			
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::overflow_error &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << BOLDBLUE << "Test 2" << RESET << std::endl;
	{
		try 
		{
			int arr[] = { 10, 20, 30, 40, 50};
   			int n = sizeof(arr) / sizeof(arr[0]);
			std::vector<int> vect(arr, arr + n);

			Span sp = Span(5);
			
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			
			sp.printVec();
			std::cout << std::endl;
			
			sp.fillrange(vect.begin(), vect.end());
			sp.printVec();
			std::cout << std::endl;
			std::cout << "shortest : " << sp.shortestSpan() << std::endl;
			std::cout << "longest : " << sp.longestSpan() << std::endl;
		}
		catch (std::overflow_error &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}