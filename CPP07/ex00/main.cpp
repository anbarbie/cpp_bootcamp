/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 16:02:09 by antbarbi          #+#    #+#             */
/*   Updated: 2022/09/06 16:40:21 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int	main()
{
	std::cout << "Test 1 : min test" << std::endl;
	std::cout << "char [c, A] : " << min<char>('c', 'A') << std::endl; 
	std::cout << "int [-17, 42] : " << min<int>(-17, 42) << std::endl; 
	std::cout << "float [10.42f, -0.5f] : " << min<float>(10.42f, -0.5f) << std::endl; 
	std::cout << "double [10.0, 10.0] : " << min<double>(10.0,10.0) << std::endl;
	
	std::cout << "\nTest 2 : max test" << std::endl;
	std::cout << "char [c, A] : " << max<char>('c', 'A') << std::endl; 
	std::cout << "int [-17, 42] : " << max<int>(-17, 42) << std::endl; 
	std::cout << "float [10.42f, -0.5f] : " << max<float>(10.42f, -0.5f) << std::endl;
	std::cout << "double [10.0, 10.0] : " << max<double>(10.0,10.0) << std::endl;
	
	std::cout << "\nTest 3 : swap test" << std::endl;
	int a = 5;
	int b = 100;
	swap<int>(a, b);
	std::cout << "int [5, 100] : " << a << " " << b << std::endl;
	char c = '4';
	char d = '2';
	swap<char>(c, d);
	std::cout << "char ['4', '2'] : " << c << " " << d << std::endl;
	return (0);
}