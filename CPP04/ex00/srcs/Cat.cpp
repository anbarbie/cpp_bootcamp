/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 20:32:21 by antbarbi          #+#    #+#             */
/*   Updated: 2022/09/16 15:32:29 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat default constructor has been called" << std::endl;
	_type = "Cat";
}

Cat::Cat(Cat const &obj)
{
	std::cout << "Cat copy constructor has been called" << std::endl;
	*this = obj;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor has been called" << std::endl;
}

Cat &Cat::operator = (Cat const &obj)
{
	std::cout << "Cat assignement constructor has been called" << std::endl;
	this->_type = obj._type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meow Meow" << std::endl;
}