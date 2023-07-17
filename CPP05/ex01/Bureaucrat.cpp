/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 13:26:52 by antbarbi          #+#    #+#             */
/*   Updated: 2022/08/24 17:16:13 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {};

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) 
{
	if (_grade < 1)
		throw GradeTooHighException();
	if (_grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &obj) {*this = obj;};

Bureaucrat::~Bureaucrat() {};

Bureaucrat &Bureaucrat::operator = (Bureaucrat const &obj)
{
	_name = obj._name;
	_grade = obj._grade;
	return (*this);
}

std::string		Bureaucrat::getName() {return (_name);};

int				Bureaucrat::getGrade() {return (_grade);};

void			Bureaucrat::Promote()
{
	_grade--;
	if (_grade < 1)
		throw GradeTooHighException();
}

void			Bureaucrat::Demote()
{
	_grade++;
	if (_grade > 150)
		throw GradeTooLowException();
}

void			Bureaucrat::signForm(Form &Form)
{
	bool	exce_caught = true;
	try 
	{
		Form.beSigned(*this);
		exce_caught = false;
	}
	catch (Form::GradeTooLowException& e)
	{
		std::cout  << GREEN << _name << " couldn't sign " << Form.getName() << " because " << e.what() << RESET << std::endl;
	}
	if (!exce_caught)
		std::cout << GREEN << _name << " signed " << Form.getName() << RESET << std::endl;
}

std::ostream &operator<< (std::ostream &o, Bureaucrat &rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return (o);
}