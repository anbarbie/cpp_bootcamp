/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:25:15 by antbarbi          #+#    #+#             */
/*   Updated: 2022/08/26 17:14:57 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name(""), _grade_sign(150), _grade_exec(150) {};

Form::Form(std::string name, int grade_sign, int grade_exec)
: _name(name), _grade_sign(grade_sign), _grade_exec(grade_exec), _sign(false)
{
	if (_grade_sign < 1)
		throw GradeTooHighException();
	if (_grade_sign > 150)
		throw GradeTooLowException();
	if (_grade_exec < 1)
		throw GradeTooHighException();
	if (_grade_exec > 150)
		throw GradeTooLowException();
}

Form::Form(Form const &obj) :
_name(obj._name), _grade_sign(obj._grade_sign), _grade_exec(obj._grade_exec), _sign(obj._sign)
{
	*this = obj;
};

Form::~Form() {};

Form &Form::operator = (Form const &obj)
{
	_sign = obj._sign;
	return (*this);
}

const std::string	Form::getName() const {return _name;}

int			Form::getGradeSign() const {return _grade_sign;}

int			Form::getGradeExec() const {return _grade_exec;}

bool		Form::getSign() const {return _sign;}

void		Form::beSigned(Bureaucrat &john)
{
	if (john.getGrade() > _grade_sign)
		throw GradeTooLowException();
	else
		_sign = true;
}

std::ostream	&operator<<(std::ostream &o, Form &rhs)
{
	if (rhs.getSign())
	{
		o << "Form " << rhs.getName() << "; Sign grade "
		<< rhs.getGradeSign() << "; Sign exec " << rhs.getGradeExec()
		<< "; Sign status is signed";
	}
	else
	{
		o << "Form " << rhs.getName() << "; Sign grade "
		<< rhs.getGradeSign() << "; Sign exec " << rhs.getGradeExec()
		<< "; Sign status is not signed";
	}
	return o;
}