/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 16:49:36 by antbarbi          #+#    #+#             */
/*   Updated: 2022/09/06 17:37:01 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main()
{
	int tab[] = {1, 2, 3, 4, 5};
	char str[] = "abcdef";
	float arr[] = {1.5f, 2.5f, 3.5f};
	
	std::cout << "Test 1 : int tab[1 2 3 4 5]" << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << tab[i] << " ";
	std::cout << std::endl;
	iter(tab, 5, plusone<int>);
	for (int i = 0; i < 5; i++)
		std::cout << tab[i] << " ";
	std::cout << std::endl << std::endl;
	
	std::cout << "Test 2 : char tab[a b c d e f]" << std::endl;
	for (int i = 0; i < 6; i++)
		std::cout << str[i] << " ";
	std::cout << std::endl;
	iter(str, 6, plusone<char>);
	for (int i = 0; i < 6; i++)
		std::cout << str[i] << " ";
	std::cout << std::endl << std::endl;

	std::cout << "Test 3 : float tab[1 2 3]" << std::endl;
	for (int i = 0; i < 3; i++)
		std::cout << std::fixed << std::setprecision(1) << arr[i] << "f ";
	std::cout << std::endl;
	iter(arr, 3, plusone<float>);
	for (int i = 0; i < 3; i++)
		std::cout << arr[i] << "f ";
	std::cout << std::endl << std::endl;
	return (0);
}