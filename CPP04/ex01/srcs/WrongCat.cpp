/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 20:59:38 by antbarbi          #+#    #+#             */
/*   Updated: 2022/08/11 21:04:11 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat default constructor has been called" << std::endl;
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
	(void)obj;
	std::cout << "I do nothing" << std::endl;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "Meow Meow" << std::endl;
}