/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 17:03:52 by antbarbi          #+#    #+#             */
/*   Updated: 2022/08/10 12:49:07 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	std::string		input;
	int				i = 0;

	std::cout << "Your FragTrap name is ";
	std::cin >> input;
	
	FragTrap	FragTrap(input);
	std::cout << "Hello! " << input << std::endl;
	std::cout << "[attack] [repair] [gethit] [highfive] [status] [exit]" << std::endl;
	while (true)
	{
		std::cin >> input;
		if (input == "exit")
			break ;
		if (input == "attack")
			FragTrap.attack("Scarecrow");
		if (input == "repair")
		{
			std::cin >> i;
			while (std::cin.fail() || i < 1)
				std::cin >> i;
			FragTrap.beRepaired(i);
		}
		if (input == "gethit")
		{
			std::cin >> i;
			while (std::cin.fail() || i < 1)
				std::cin >> i;
			FragTrap.takeDamage(i);
		}
		if (input == "highfive")
			FragTrap.highFiveGuys();
		if (input == "status")
			std::cout << "Your FragTrap HP is " << FragTrap.getHP() << " and EP is " << FragTrap.getEP() << std::endl;
	}
	return (0);
}