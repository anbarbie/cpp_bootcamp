/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 15:10:51 by antbarbi          #+#    #+#             */
/*   Updated: 2022/07/25 15:25:33 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->_nb_contact = 0;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

static void upper_row()
{
	for (int i = 0; i < 45; i++)
		std::cout << '_';
	std::cout << std::endl;
	std::cout << '|' << std::setw(10) << "Index" << '|';
	std::cout << std::setw(10) << "First Name" << '|';
	std::cout << std::setw(10) << "Last Name" << '|';
	std::cout << std::setw(10) << "Nickname" << '|' << std::endl;
}

int		cin_check_integer(std::string prompt)
{
	int i = 0; 
	
	std::cout << prompt;
	std::cin >> i;
	while (!std::cin.good())
	{
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<int>::max(),'\n');
			std::cerr << "\033[1;31mERROR : Not a numerical value\033[0m" << std::endl;
		}
		std::cout << prompt;
		std::cin >> i;
	}
	return (i);
}

void	PhoneBook::search_contact(void) const
{
	int	index = -1;
	
	upper_row();
	for (int i = 0; i < this->_nb_contact; i++)
	{
		std::cout << '|'  << std::setw(10) << i << '|';
		this->_contact[i].show_contact();
	}
	while (index < 0 || index >= this->_nb_contact)
	{
		index = cin_check_integer("\nEnter index : ");
		if (index >= 0 && index <= this->_nb_contact - 1)
			this->_contact[index].show_contact_info();
		else if (index >= 0 && index <= MAX_CONT - 1)
		{
			std::cout << "~~No contact in this index~~" << std::endl;
			return ;
		}
		else
			std::cerr << "\033[1;31mERROR : Wrong Index Number\033[0m" << std::endl;
	}
	return ;
}

void	PhoneBook::add_contact(void)
{
	static int i = 0;
	
	this->_contact[i].set_contact();
	if (this->_nb_contact < MAX_CONT)
		this->_nb_contact++;
	if (i < MAX_CONT - 1)
		i++;
	else
		i = 0;
	std::cout << "\033[1;32mPhonebook : \033[0m";
	return ;
}