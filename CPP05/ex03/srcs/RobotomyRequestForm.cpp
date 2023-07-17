/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 17:30:34 by antbarbi          #+#    #+#             */
/*   Updated: 2022/08/26 17:40:32 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target) {};

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj) : Form("RobotomyRequestForm", 72, 45), _target(obj._target) {*this = obj;}

RobotomyRequestForm::~RobotomyRequestForm() {};

RobotomyRequestForm &RobotomyRequestForm::operator = (RobotomyRequestForm const &obj)
{
	(void)obj;
	std::cout << "I do nothing" << std::endl;
	return (*this);
}

std::string		RobotomyRequestForm::getTarget() const {return _target;}

void			RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (!getSign())
		throw FormNotSigned();
	if (executor.getGrade() > 45)
		throw GradeTooLowException();
	std::cout << "~~Drilling sounds~~" << std::endl;
	srand (time(0));
	int success = rand() % 2;

	if (success)
		std::cout << GREEN << _target << " has been robotomised with success" << RESET << std::endl;
	if (!success)
		std::cout << YELLOW << _target << " has not been robotomised with success" << RESET << std::endl;
}