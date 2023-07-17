/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 14:07:37 by antbarbi          #+#    #+#             */
/*   Updated: 2022/08/09 13:38:06 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0) {}

Point::Point(const float x, const float y) : _x(x), _y(y) {}

Point::Point(Point const &obj)
{
	*this = obj;
	return ;
}

Point::~Point(void) {}

Point	&Point::operator=(Point const &obj)
{
	(void)obj;
	return (*this);
}

Fixed	Point::getFixedx() const
{
	return (this->_x);
}

Fixed	Point::getFixedy() const
{
	return (this->_y);
}