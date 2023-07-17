/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 16:15:13 by antbarbi          #+#    #+#             */
/*   Updated: 2022/07/22 12:45:52 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	std::string		input;
	PhoneBook		pbook;
	Contact			contact;

	std::cout << "My Awesome Phonebook!" << std::endl;
	std::cout << "\033[1;32mPhonebook : \033[0m";
	while (true)
	{
		std::getline(std::cin, input);
		if (input == "EXIT")
			break ;
		else if (input == "SEARCH")
			pbook.search_contact();
		else if (input == "ADD")
			pbook.add_contact();
		else
			std::cout << "\033[1;32mPhonebook : \033[0m";
	}
	std::cout << "You're leaving my awesome Phonebook" << std::endl;
	return (0);
}
