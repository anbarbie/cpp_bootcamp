/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:11:57 by antbarbi          #+#    #+#             */
/*   Updated: 2022/08/20 12:52:29 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "color.hpp"

Ice::Ice() : AMateria("ice") {};

Ice::Ice(Ice const &obj) : AMateria("ice") {*this = obj;};

Ice::~Ice() {};

Ice &Ice::operator = (Ice const &obj)
{
	_type = obj._type;
	return (*this);
}

AMateria	*Ice::clone() const {return (new Ice(*this));}

void		Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}