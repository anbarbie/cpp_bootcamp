/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 20:28:04 by antbarbi          #+#    #+#             */
/*   Updated: 2022/09/16 16:26:07 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(void)
{
	std::cout << "->Dog default constructor has been called" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(Dog const &obj)
{
	std::cout << "->Dog copy constructor has been called" << std::endl;
	this->_brain = new Brain();
	*this = obj;
}

Dog::~Dog(void)
{
	std::cout << "->Dog destructor has been called" << std::endl;
	delete _brain;
}

Dog &Dog::operator = (Dog const &obj)
{
	std::cout << "->Dog assignement constructor has been called" << std::endl;
	if (this == &obj)
		return (*this);
	this->_type = obj._type;
	*this->_brain = *obj.getBrain();
	return (*this);
}

Animal	&Dog::operator= (Animal const &obj)
{
	std::cout << "->Dog assignement constructor has been called" << std::endl;
	this->_type = obj.getType();
	*this->_brain = *obj.getBrain();
	return (*this);
}


void 	Dog::makeSound() const
{
	std::cout << "Woof Woof" << std::endl;
}

Brain	*Dog::getBrain() const {return (this->_brain);}