/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 20:59:38 by antbarbi          #+#    #+#             */
/*   Updated: 2022/09/16 15:35:19 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat default constructor has been called" << std::endl;
	_type = "Cat";
}

WrongCat::WrongCat(WrongCat const &obj)
{
	std::cout << "WrongCat copy constructor has been called" << std::endl;
	*this = obj;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor has been called" << std::endl;
}

WrongCat &WrongCat::operator = (WrongCat const &obj)
{
	std::cout << "WrongCat asssignement operator has been called" << std::endl;
	this->_type = obj.getType();
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "Meow Meow" << std::endl;
}