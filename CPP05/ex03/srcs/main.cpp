/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 15:48:33 by antbarbi          #+#    #+#             */
/*   Updated: 2022/08/26 19:49:40 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main()
{
	{
		try
		{
			Intern someRandomIntern;
			Form* rrf;
			rrf = someRandomIntern.makeForm("ShrubberyCreationForm", "Bender");
			delete rrf;
			rrf = someRandomIntern.makeForm("PresidentialPardonForm", "Bender");
			delete rrf;
			rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");
			delete rrf;
			rrf = someRandomIntern.makeForm("testdsadwqdqwdqwdqwdqww", "Bender");
			delete rrf;
		}
		catch (Intern::NotValidForm &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}