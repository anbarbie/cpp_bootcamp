/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 17:03:52 by antbarbi          #+#    #+#             */
/*   Updated: 2022/08/09 19:59:05 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	std::string		input;
	int				i = 0;

	std::cout << "Your ScavTrap name is ";
	std::cin >> input;
	
	ScavTrap	ScavTrap(input);
	std::cout << "Hello! " << input << std::endl;
	std::cout << "[attack] [repair] [gethit] [gate] [status] [exit]" << std::endl;
	while (true)
	{
		std::cin >> input;
		if (input == "exit")
			break ;
		if (input == "attack")
			ScavTrap.attack("Scarecrow");
		if (input == "repair")
		{
			std::cout << "the amount is ";
			std::cin >> i;
			while (std::cin.fail() || i < 1)
				std::cin >> i;
			ScavTrap.beRepaired(i);
		}
		if (input == "gethit")
		{
			std::cout << "the amount is ";
			std::cin >> i;
			while (std::cin.fail() || i < 1)
				std::cin >> i;
			ScavTrap.takeDamage(i);
		}
		if (input == "gate")
			ScavTrap.guardGate();
		if (input == "status")
			std::cout << "Your ScavTrap HP is " << ScavTrap.getHP() << " and EP is " << ScavTrap.getEP() << std::endl;
	}
	return (0);
}