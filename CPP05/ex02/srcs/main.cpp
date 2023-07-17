/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 15:48:33 by antbarbi          #+#    #+#             */
/*   Updated: 2022/10/01 14:39:25 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main()
{
	std::cout << BOLDBLUE << "\nTEST 1 : Shrubbery Valid" << RESET << std::endl;
	{
		try
		{
			Bureaucrat a("John", 137);
			Form		*shrub = new ShrubberyCreationForm("Garden");
			Bureaucrat b("Doe", 145);

			std::cout << a << std::endl;
			std::cout << b << std::endl;
			b.signForm(*shrub);
			
			a.executeForm(*shrub);
			delete shrub;
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
			std::cout << RED << e.what() << RESET << std::endl;
		}
		catch (Form::GradeTooHighException& e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
	}
	std::cout << BOLDBLUE << "\nTEST 2 : Shrubbery not valid" << RESET << std::endl;
	{
		try
		{
			Bureaucrat a("John", 138);
			Form		*shrub = new ShrubberyCreationForm("Garden");

			Bureaucrat b("Doe", 145);

			std::cout << a << std::endl;
			std::cout << b << std::endl;
			b.signForm(*shrub);
			
			a.executeForm(*shrub);
			delete shrub;
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
			std::cout << RED << e.what() << RESET << std::endl;
		}
		catch (Form::GradeTooHighException& e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
	}
	std::cout << BOLDBLUE << "\nTEST 3 : Robotomy valid" << RESET << std::endl;
	{
		try
		{
			Bureaucrat a("John", 45);
			Form		*robot = new RobotomyRequestForm("Bender");

			Bureaucrat b("Doe", 72);
			
			std::cout << a << std::endl;
			std::cout << b << std::endl;
			b.signForm(*robot);
			
			a.executeForm(*robot);
			delete robot;
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
			std::cout << RED << e.what() << RESET << std::endl;
		}
		catch (Form::GradeTooHighException& e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
	}
	std::cout << BOLDBLUE << "\nTEST 4 : Robotomy not valid" << RESET << std::endl;
	{
		try
		{
			Bureaucrat a("John", 46);
			Form		*robot = new RobotomyRequestForm("Bender");

			Bureaucrat b("Doe", 72);
		
			std::cout << a << std::endl;
			std::cout << b << std::endl;
			b.signForm(*robot);
			
			a.executeForm(*robot);
			delete robot;
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
			std::cout << RED << e.what() << RESET << std::endl;
		}
		catch (Form::GradeTooHighException& e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
	}
	std::cout << BOLDBLUE << "\nTEST 5 : PresidentialPardon valid" << RESET << std::endl;
	{
		try
		{
			Bureaucrat a("John", 5);
			Form		*pardon = new PresidentialPardonForm("ಠ_ಠ");

			Bureaucrat b("Doe", 25);
		
			std::cout << a << std::endl;
			std::cout << b << std::endl;
			b.signForm(*pardon);
			
			a.executeForm(*pardon);
			delete pardon;
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
			std::cout << RED << e.what() << RESET << std::endl;
		}
		catch (Form::GradeTooHighException& e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
	}
	std::cout << BOLDBLUE << "\nTEST 6 : PresidentialPardon not valid" << RESET << std::endl;
	{
		try
		{
			Bureaucrat a("John", 6);
			Form		*pardon = new PresidentialPardonForm("ಠ_ಠ");

			Bureaucrat b("Doe", 25);

			std::cout << a << std::endl;
			std::cout << b << std::endl;
			b.signForm(*pardon);
			
			a.executeForm(*pardon);
			delete pardon;
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
			std::cout << RED << e.what() << RESET << std::endl;
		}
		catch (Form::GradeTooHighException& e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
	}
	return (0);
}