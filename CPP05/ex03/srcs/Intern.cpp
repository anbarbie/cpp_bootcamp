/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 17:47:16 by antbarbi          #+#    #+#             */
/*   Updated: 2022/10/01 14:44:08 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {};

Intern::Intern(Intern const &obj) {*this = obj;};

Intern::~Intern() {};

Intern &Intern::operator = (Intern const &obj)
{
	(void)obj;
	std::cout << "I do nothing" << std::endl;
	return (*this);
}

int		check_form(std::string form)
{
	std::string		name[] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	int				i = 0;

	while (i < 3)
	{
		if (name[i] == form)
			return i;
		i++;
	}
	return i;
}

Form	*Intern::makeForm(std::string form, std::string target)
{
	int	i = check_form(form);
	
	switch (i)
	{
		case 0:
			std::cout << "Intern creates " << form << std::endl;
			return (new ShrubberyCreationForm(target));
			break;
		case 1:
			std::cout << "Intern creates " << form << std::endl;
			return (new PresidentialPardonForm(target));
			break;
		case 2:
			std::cout << "Intern creates " << form << std::endl;
			return (new RobotomyRequestForm(target));
			break ;
		
		default:
			throw NotValidForm();
			return NULL;
			break;
	}
}