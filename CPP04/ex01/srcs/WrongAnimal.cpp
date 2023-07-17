/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 20:59:14 by antbarbi          #+#    #+#             */
/*   Updated: 2022/08/11 21:03:39 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal constructor has been called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string name) : _type(name)
{
	std::cout << "WrongAnimal parametric constructor has been called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &obj)
{
	std::cout << "WrongAnimal copy contrusctor has been called" << std::endl;
	*this = obj;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor has been called" << std::endl;
}

WrongAnimal &WrongAnimal::operator = (WrongAnimal const &obj)
{
	(void)obj;
	std::cout << "I do nothing" << std::endl;
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal makes sound" << std::endl;
}

const std::string		WrongAnimal::getType() const
{
	return (this->_type);
}