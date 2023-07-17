/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 17:39:21 by antbarbi          #+#    #+#             */
/*   Updated: 2022/12/19 10:58:46 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "color.hpp"

int	main()
{
	std::cout << BOLDBLUE << "Test 1 : array of int" << RESET << std::endl;
	{
		Array<int>a;
		Array<int>b(3);
		Array<int>c(5);
		
		std::cout << "size of a is " << a.size() << std::endl;
		std::cout << "size of b is " << b.size() << std::endl;
		std::cout << "size of c is " << c.size() << std::endl << std::endl;

		for (int i = 0; i < 3; i++)
			b[i] = 42;
	 	c = b;
		b[1] = 30;
		b[2] = 12;

		for (int i = 0; i < 3; i++)
			std::cout << "b[" << i << "] : " << b[i] << std::endl;

		std::cout << std::endl;
		for (int i = 0; i < 3; i++)
			std::cout << "c[" << i << "] : " << c[i] << std::endl;

		Array<int>d(b);
		std::cout << std::endl;
		for (int i = 0; i < 3; i++)
			std::cout << "d[" << i << "] : " << d[i] << std::endl;
		std::cout << "size of b is " << b.size() << std::endl;
		std::cout << "size of c is " << c.size() << std::endl;
		std::cout << "size of d is " << d.size() << std::endl;
	}
	std::cout << BOLDBLUE << "\nTest 2 : Misc" << RESET << std::endl;
	{
		try
		{
			//Array<std::string>d(-5);
			
			Array<std::string>c(0);
			
			Array<std::string>a(10);
			
			a[5] = "hello";
			std::cout << a[5] << std::endl;
			// std::cout << c[0] << std::endl;
			// std::cout << a[11] << std::endl;
			// std::cout << a[-1] << std::endl;
			
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return 0;
}