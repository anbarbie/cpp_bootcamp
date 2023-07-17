/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:41:05 by antbarbi          #+#    #+#             */
/*   Updated: 2022/09/15 13:11:09 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal constructor has been called" << std::endl;
}

Animal::Animal(std::string name) : _type(name)
{
	std::cout << "Animal parametric constructor has been called" << std::endl;
}

Animal::Animal(Animal const &obj)
{
	std::cout << "Animal copy contrusctor has been called" << std::endl;
	*this = obj;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor has been called" << std::endl;
}

Animal &Animal::operator = (Animal const &obj)
{
	std::cout << "Animal assignement operator has been called" << std::endl;
	if (this == &obj)
		return (*this);
	this->_type = obj._type;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "Animal makes sound" << std::endl;
}

const std::string		Animal::getType() const
{
	return (this->_type);
}