/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 20:32:21 by antbarbi          #+#    #+#             */
/*   Updated: 2022/09/16 16:26:36 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(void)
{
	std::cout << "->Cat default constructor has been called" << std::endl;
	this->_brain = new Brain();
}

Cat::Cat(Cat const &obj)
{
	std::cout << "->Cat copy constructor has been called" << std::endl;
	this->_brain = new Brain();
	*this = obj;
}

Cat::~Cat(void)
{
	std::cout << "->Cat destructor has been called" << std::endl;
	delete _brain;
}

Cat &Cat::operator = (Cat const &obj)
{
	std::cout << "Cat assignement constructor has been called" << std::endl;
	if (this == &obj)
		return (*this);
	this->_type = obj._type;
	*this->_brain = *obj.getBrain();
	return (*this);
}

Animal	&Cat::operator= (Animal const &obj)
{
	std::cout << "Virtual Cat assignement constructor has been called" << std::endl;
	this->_type = obj.getType();
	*this->_brain = *obj.getBrain();
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meow Meow" << std::endl;
}

Brain	*Cat::getBrain() const {return (this->_brain);}