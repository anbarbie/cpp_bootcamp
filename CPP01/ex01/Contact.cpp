/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 15:10:30 by antbarbi          #+#    #+#             */
/*   Updated: 2022/07/25 15:23:59 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

std::string	Contact::show_format(std::string str) const
{
	if (str.size() > 10)
		return (str.substr(0,9) + '.');
	else
		return (str);
}

void	Contact::show_contact(void) const
{
	std::cout << std::setw(10) << show_format(this->_first_name) << '|';
	std::cout << std::setw(10) << show_format(this->_last_name) << '|';
	std::cout << std::setw(10) << show_format(this->_nickname) << '|' << std::endl;
}

void	Contact::show_contact_info() const
{
	std::cout << "His first name is " << this->_first_name << std::endl;
	std::cout << "His last name is " << this->_last_name << std::endl;
	std::cout << "His nickname is " << this->_nickname << std::endl;
	std::cout << "His phone number is " << this->_phone << std::endl;
	std::cout << "His darkest secret is " << this->_dsecret << std::endl;
}

std::string	cin_str_prompt(std::string prompt)
{
	std::string	input;

	std::cout << prompt;
	while (getline(std::cin, input))
	{
		if (input == "")
			std::cout << prompt;
		else
			break ;
	}
	return (input);
}

void	Contact::set_contact(void)
{
	this->_first_name = cin_str_prompt("Enter first name : ");
	this->_last_name = cin_str_prompt("Enter last name : ");
	this->_nickname = cin_str_prompt("Enter nickname : ");
	this->_phone = cin_str_prompt("Enter phone number : ");
	this->_dsecret = cin_str_prompt("Enter darkest secret : ");
}
