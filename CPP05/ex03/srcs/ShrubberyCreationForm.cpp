/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 17:30:32 by antbarbi          #+#    #+#             */
/*   Updated: 2022/08/26 17:40:16 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137), _target("") {};

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target) {};

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj) : Form("ShrubberyCreationForm", 145, 137), _target(obj._target)
{
	*this = obj;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {};

ShrubberyCreationForm &ShrubberyCreationForm::operator = (ShrubberyCreationForm const &obj)
{
	(void)obj;
	std::cout << "I do nothing" << std::endl;
	return (*this);
}

std::string		ShrubberyCreationForm::getTarget() const {return _target;}

void			drawTree(std::ofstream &Myfile)
{
	Myfile << "       _-_" << std::endl;
	Myfile << "    /~~   ~~\\" << std::endl;
	Myfile << " /~~         ~~\\" << std::endl;
	Myfile << "{               }" << std::endl;
	Myfile << " \\  _-     -_  /" << std::endl;
	Myfile << "   ~  \\\\ //  ~" << std::endl;
	Myfile << "_- -   | | _- _" << std::endl;
	Myfile << "  _ -  | |   -_" << std::endl;
	Myfile << "      // \\\\" << std::endl;
}

void			ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!getSign())
		throw FormNotSigned();
	if (executor.getGrade() > 137)
		throw GradeTooLowException();
	std::ofstream Myfile((_target + "_shrubbery").c_str(), std::fstream::app);
	drawTree(Myfile);	
}