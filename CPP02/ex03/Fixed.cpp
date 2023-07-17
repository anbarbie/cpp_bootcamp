/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 13:46:27 by antbarbi          #+#    #+#             */
/*   Updated: 2022/08/07 13:46:29 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
	return ;
}

Fixed::Fixed(const int i)
{
	this->_value = i << this->_frac_bits;
	return ;
}

Fixed::Fixed(const float f)
{
	this->_value = (int)(roundf(f * (1 << this->_frac_bits)));
	return ;
}

Fixed::Fixed(Fixed const &obj)
{	
	*this = obj;
	return ;
}

Fixed::~Fixed()
{
	return ;
}

Fixed  &Fixed::operator = (Fixed const &obj)
{
	if (this == &obj)
		return (*this);
	this->_value = obj.getRawBits();
	return (*this);
}

bool	Fixed::operator > (Fixed const &obj) const
{
	return (this->getRawBits() > obj.getRawBits());
}

bool	Fixed::operator < (Fixed const &obj) const
{
	return (this->getRawBits() < obj.getRawBits());
}

bool	Fixed::operator >= (Fixed const &obj) const
{
	return (this->getRawBits() >= obj.getRawBits());
}

bool	Fixed::operator <= (Fixed const &obj) const
{
	return (this->getRawBits() <= obj.getRawBits());
}

bool	Fixed::operator == (Fixed const &obj) const
{
	return (this->getRawBits() == obj.getRawBits());
}

bool	Fixed::operator != (Fixed const &obj) const
{
	return (this->getRawBits() != obj.getRawBits());
}

Fixed	Fixed::operator + (Fixed const &obj)
{
	Fixed res;

	res._value = _value + obj._value; //Works
	return (res);
}

Fixed	Fixed::operator - (Fixed const &obj)
{
	Fixed res;

	res._value = _value - obj._value; //Works
	return (res);
}

Fixed	Fixed::operator * (Fixed const &obj)
{
	Fixed res;

	res._value = _value * obj._value / (1 << _frac_bits); //works
	return (res);
}

Fixed	Fixed::operator / (Fixed const &obj)
{
	Fixed res;

	res._value = (_value * (1 << _frac_bits)) / obj._value; //works
	return (res);
}

Fixed	&Fixed::operator++() //work
{
	this->_value++;
	return *this;
}

Fixed	Fixed::operator++(int) //work
{
	Fixed tmp(*this);
	operator++();
	return tmp;
}

Fixed	&Fixed::operator--()
{
	this->_value--;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);
	operator--();
	return tmp;
}

int		Fixed::getRawBits() const
{
	return (this->_value);
}

void	Fixed::setRawBits(const int raw)
{
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

Fixed &Fixed::min(Fixed &v1, Fixed &v2)
{
	return (v1 < v2 ? v1 : v2);
}

Fixed const	&Fixed::min(Fixed const &v1, Fixed const &v2)
{
	return (v1 < v2 ? v1 : v2);
}

Fixed &Fixed::max(Fixed &v1, Fixed &v2)
{
	return (v1 > v2 ? v1 : v2);
}

Fixed const	&Fixed::max(Fixed const &v1, Fixed const &v2)
{
	return (v1 > v2 ? v1 : v2);
}

std::ostream &operator<< (std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return (o);
}
