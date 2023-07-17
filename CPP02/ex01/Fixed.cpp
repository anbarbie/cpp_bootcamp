/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:02:09 by antbarbi          #+#    #+#             */
/*   Updated: 2022/08/05 14:06:37 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = i << this->_frac_bits;
	return ;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructur called" << std::endl;
	this->_value = (int)(roundf(f * (1 << this->_frac_bits)));
	return ;
}

Fixed::Fixed(Fixed const &src)
{	
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed  &Fixed::operator = (Fixed const &src)
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this == &src)
		return (*this);
	this->_value = src.getRawBits();
	return (*this);
}

int		Fixed::getRawBits() const
{
	return this->_value;
}

void	Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member called" << std::endl;
	this->_value = raw;
}

float	Fixed::toFloat() const
{
	return ((float)this->_value / (float)(1 << this->_frac_bits));
}

int		Fixed::toInt() const
{
	return ((int)(this->_value >> this->_frac_bits));
}

std::ostream &operator<< (std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return (o);
}