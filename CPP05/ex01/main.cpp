/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 15:48:33 by antbarbi          #+#    #+#             */
/*   Updated: 2022/10/01 14:31:09 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	std::cout << BOLDBLUE << "TEST 1 : sign grade at 0" << RESET << std::endl;
	{
		try
		{
			Bureaucrat a("John", 50);
			
			Form		form("divorce paper", 0, 0);
			
			std::cout << a << std::endl;
			std::cout << form << std::endl << std::endl;
			a.signForm(form);
		}
		catch (Bureaucrat::GradeTooLowException& e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException& e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
		catch (Form::GradeTooLowException& e)
		{
			std::cout << RED << "Form : Sign :" << e.what() << RESET << std::endl;
		}
		catch (Form::GradeTooHighException& e)
		{
			std::cout << RED << "Form : Sign :" << e.what() << RESET << std::endl;
		}
	}
	std::cout << BOLDBLUE << "TEST 2 : sign grade at 151" << RESET << std::endl;
	{
		try
		{
			Bureaucrat a("John", 50);
			Form		form("divorce paper", 151, 151);
			
			
			std::cout << a << std::endl;
			std::cout << form << "\n" << std::endl;
			a.signForm(form);
		}
		catch (Bureaucrat::GradeTooLowException& e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException& e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
		catch (Form::GradeTooLowException& e)
		{
			std::cout << RED << "Form : Sign :" << e.what() << RESET << std::endl;
		}
		catch (Form::GradeTooHighException& e)
		{
			std::cout << RED << "Form : Sign :" << e.what() << RESET << std::endl;
		}
	}
	std::cout << BOLDBLUE << "TEST 3 : sign grade at 50" << RESET << std::endl;
	{
		try
		{
			Bureaucrat a("John", 50);
			Form		form("divorce paper", 50, 50);
			
			std::cout << a << std::endl;
			std::cout << form << "\n" << std::endl;
			a.signForm(form);
			std::cout << form << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException& e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException& e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
		catch (Form::GradeTooLowException& e)
		{
			std::cout << RED << "Form : Sign :" << e.what() << RESET << std::endl;
		}
		catch (Form::GradeTooHighException& e)
		{
			std::cout << RED << "Form : Sign :" << e.what() << RESET << std::endl;
		}
	}
	std::cout << BOLDBLUE << "TEST 4 : sign grade at 49" << RESET << std::endl;
	{
		try
		{
			Bureaucrat a("John", 50);
			Form		form("divorce paper", 49, 49);
			
			std::cout << a << std::endl;
			std::cout << form << "\n" << std::endl;
			a.signForm(form);
			std::cout << form << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException& e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException& e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
		catch (Form::GradeTooLowException& e)
		{
			std::cout << RED << "Form : Sign :" << e.what() << RESET << std::endl;
		}
		catch (Form::GradeTooHighException& e)
		{
			std::cout << RED << "Form : Sign :" << e.what() << RESET << std::endl;
		}
	}
	return (0);
}