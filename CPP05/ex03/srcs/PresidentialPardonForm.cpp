/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 17:30:37 by antbarbi          #+#    #+#             */
/*   Updated: 2022/08/26 17:40:41 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5), _target(target) {};

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &obj) : Form("PresidentialPardonForm", 25, 5), _target(obj._target)  {*this = obj;}

PresidentialPardonForm::~PresidentialPardonForm() {};

PresidentialPardonForm &PresidentialPardonForm::operator = (PresidentialPardonForm const &obj)
{
	(void)obj;
	std::cout << "I do nothing" << std::endl;
	return (*this);
}

std::string		PresidentialPardonForm::getTarget() const {return _target;}

void			PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (!getSign())
		throw FormNotSigned();
	if (executor.getGrade() > 5)
		throw GradeTooLowException();
	std::cout << _target << " has been pardonned by Zaphod Beeblebrox" << std::endl;
}