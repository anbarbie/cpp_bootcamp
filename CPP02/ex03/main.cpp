/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 13:44:39 by antbarbi          #+#    #+#             */
/*   Updated: 2022/08/09 15:48:44 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

//Use geogebra macro for your own tests
// https://www.geogebra.org/m/VWN3g9rE
int	main()
{
	std::cout << "Use geogebra and copy paste the following for visual\n" << std::endl;
	
	std::cout << "Execute[{\"A=(7,2)\",\"B=(2,4)\",\"C=(2,1)\",\"P=(4,2)\"}]" << std::endl;
	std::cout << bsp(Point(7, 2), Point(2, 4), Point(2, 1), Point(4, 2)) << std::endl;
	
	std::cout << "Execute[{\"A=(-2,2)\",\"B=(-7,6)\",\"C=(-7,2)\",\"P=(-5,4)\"}]" << std::endl;
	std::cout << bsp(Point(-2, 2), Point(-7, 6), Point(-7, 2), Point(-5, 4)) << std::endl;
	
	std::cout << "Execute[{\"A=(-6,-7)\",\"B=(-4,-2)\",\"C=(-9,-2)\",\"P=(-6,-4)\"}]" << std::endl;
	std::cout << bsp(Point(-6, -7), Point(-4, -2), Point(-9, -2), Point(-6, -4)) << std::endl;
	
	std::cout << "Execute[{\"A=(4,-5)\",\"B=(9,-2)\",\"C=(9,-8)\",\"P=(7,-5)\"}]" << std::endl;
	std::cout << bsp(Point(4, -5), Point(9, -2), Point(9, -8), Point(7, -5)) << std::endl;
	
/* 	std::cout << "Execute[{\"A=(0,0.5)\",\"B=(-0.5,-0.5)\",\"C=(0.5,-0.5)\",\"P=(0,0)\"}]" << std::endl;
	std::cout << bsp(Point(0, 0.5f), Point(-0.5f, -0.5f), Point(0.5f, -0.5f), Point(0, 0)) << std::endl;
	
	std::cout << "Execute[{\"A=(7,2)\",\"B=(2,4)\",\"C=(2,1)\",\"P=(5,4)\"}]" << std::endl;
	std::cout << bsp(Point(7, 2), Point(2, 4), Point(2, 1) ,Point(5, 4)) << std::endl;

	std::cout << "Execute[{\"A=(0.2,0.3)\",\"B=(0.4,0.6)\",\"C=(0.7,0.8)\",\"P=(0.4, 0.55)\"}]" << std::endl;
	std::cout << bsp(Point(0.2, 0.3), Point(0.4, 0.6), Point(0.7, 0.8) ,Point(0.4, 0.55)) << std::endl; */
}