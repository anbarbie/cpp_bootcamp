/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 15:48:33 by antbarbi          #+#    #+#             */
/*   Updated: 2022/08/22 17:10:02 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	std::cout << BOLDBLUE << "TEST 1 : Grade is set at 50" << RESET << std::endl;
	{
		try
		{
			Bureaucrat a("John", 50);
			std::cout << a << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException& e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException& e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
	}
	std::cout << BOLDBLUE << "TEST 2 : Grade is set at 151" << RESET << std::endl;
	{
		try
		{
			Bureaucrat a("John", 151);
			std::cout << a << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException& e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException& e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
	}
	std::cout << BOLDBLUE << "TEST 3 : Grade is set at 0" << RESET << std::endl;
	{
		try
		{
			Bureaucrat a("John", 0);
			std::cout << a << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException& e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException& e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
	}
	std::cout << BOLDBLUE << "TEST 4 : Demotion" << RESET << std::endl;
	{
		try
		{
			Bureaucrat a("John", 147);
			std::cout << a << std::endl;
			a.Demote();
			std::cout << a << std::endl;
			a.Demote();
			std::cout << a << std::endl;
			a.Demote();
			std::cout << a << std::endl;
			a.Demote();
			std::cout << a << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException& e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException& e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
	}
	std::cout << BOLDBLUE << "TEST 5 : Promotion" << RESET << std::endl;
	{
		try
		{
			Bureaucrat a("John", 3);
			std::cout << a << std::endl;
			a.Promote();
			std::cout << a << std::endl;
			a.Promote();
			std::cout << a << std::endl;
			a.Promote();
			std::cout << a << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException& e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException& e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
	}
	return (0);
}