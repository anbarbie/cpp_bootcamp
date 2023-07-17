/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 20:28:04 by antbarbi          #+#    #+#             */
/*   Updated: 2022/09/16 15:32:09 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog default constructor has been called" << std::endl;
	_type = "Dog";
}

Dog::Dog(Dog const &obj)
{
	std::cout << "Dog copy constructor has been called" << std::endl;
	*this = obj;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor has been called" << std::endl;
}

Dog &Dog::operator = (Dog const &obj)
{
	std::cout << "->Dog assignement constructor has been called" << std::endl;
	this->_type = obj._type;
	return (*this);
}

void 	Dog::makeSound() const
{
	std::cout << "Woof Woof" << std::endl;
}