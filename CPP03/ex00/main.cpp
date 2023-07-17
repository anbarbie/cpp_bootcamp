/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 17:03:52 by antbarbi          #+#    #+#             */
/*   Updated: 2022/08/30 12:44:24 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	std::string		input;
	int				i = 0;

	std::cout << "Your ClapTrap name is ";
	std::cin >> input;
	
	ClapTrap	claptrap(input);
	std::cout << "Hello! " << input << std::endl;
	std::cout << "[attack] [repair] [gethit] [status] [exhausted] [exit]" << std::endl;
	while (true)
	{
		std::cin >> input;
		if (input == "exit")
			break ;
		if (input == "attack")
			claptrap.attack("Scarecrow");
		if (input == "repair")
		{
			std::cout << "the amount is ";
			do {std::cin >> i;}
			while (std::cin.fail() || i < 1);
			claptrap.beRepaired(i);
		}
		if (input == "gethit")
		{
			std::cout << "the amount is ";
			std::cin >> i;
			while (std::cin.fail() || i < 1)
				std::cin >> i;
			claptrap.takeDamage(i);
		}
		if (input == "status")
			std::cout << "Your ClapTrap HP is " << claptrap.getHP() << " and EP is " << claptrap.getEP() << std::endl;
		if (input == "exhausted")
		{
			for (int i = 0; i < 10; i++)
				claptrap.attack("Scarecrow");
		}
	}
	return (0);
}