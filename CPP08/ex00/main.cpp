/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 18:09:31 by antbarbi          #+#    #+#             */
/*   Updated: 2023/01/18 16:37:13 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main()
{
	int arr[] = { 10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
  
    std::vector<int> vect(arr, arr + n);
	
	std::cout << "[10, 20, 30, 40, 50]" << std::endl;
	std::cout << "easyfind 30 : "<< *easyfind(vect, 30) << std::endl;
	std::cout << "iterator's index : " << std::distance(vect.begin(), easyfind(vect, 30)) << std::endl;
	std::cout << "easyfind 33 : "<< *easyfind(vect, 33) << std::endl;
	std::cout << "iterator's index : " << std::distance(vect.begin(), easyfind(vect, 33)) << std::endl << std::endl;

	int	arr2[]= { 25, 57, 0, 68, 24};
	int m = sizeof(arr2) / sizeof(arr2[0]);

	std::vector<int> vec(arr2, arr2 + m);
	std::cout << "[ 25, 57, 0, 68, 24]" << std::endl;
	std::cout << "easyfind 24 : " << *easyfind(vec, 24) << std::endl;
	std::cout << "iterator's index : " << std::distance(vec.begin(), easyfind(vec, 30)) << std::endl;
	std::cout << "easyfind 0 : " << std::distance(vec.begin(), easyfind(vec, 0)) << std::endl;
	std::cout << "iterator's index : " << std::distance(vec.begin(), easyfind(vec, 0)) << std::endl;
	return 0;
}