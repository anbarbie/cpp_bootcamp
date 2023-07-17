/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 17:03:52 by antbarbi          #+#    #+#             */
/*   Updated: 2022/08/11 18:45:04 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	std::string		input;
	int				i = 0;

	std::cout << "Your DiamondTrap name is ";
	std::cin >> input;
	
	DiamondTrap	DiamondTrap(input);
	std::cout << "Hello! " << input << std::endl;
	std::cout << "[attack] [repair] [gethit] [gate] [highfive] [who] [status] [exit]" << std::endl;
	while (true)
	{
		std::cin >> input;
		if (input == "exit")
			break ;
		if (input == "attack")
			DiamondTrap.attack("Scarecrow");
		if (input == "repair")
		{
			std::cin >> i;
			while (std::cin.fail() || i < 1)
				std::cin >> i;
			DiamondTrap.beRepaired(i);
		}
		if (input == "gethit")
		{
			std::cin >> i;
			while (std::cin.fail() || i < 1)
				std::cin >> i;
			DiamondTrap.takeDamage(i);
		}
		if (input == "highfive")
			DiamondTrap.highFiveGuys();
		if (input == "gate")
			DiamondTrap.guardGate();
		if (input == "who")
			DiamondTrap.whoAmI();
		if (input == "status")
			std::cout << "Your DiamondTrap HP is " << DiamondTrap.FragTrap::getHP() << " and EP is " << DiamondTrap.ScavTrap::getEP() << std::endl;
	}
	return (0);
}