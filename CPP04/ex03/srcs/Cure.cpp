/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:11:53 by antbarbi          #+#    #+#             */
/*   Updated: 2022/08/20 12:53:29 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "color.hpp"

Cure::Cure() : AMateria("cure") {};

Cure::Cure(Cure const &obj) : AMateria("cure") {*this = obj;};

Cure &Cure::operator = (Cure const &obj)
{
	_type = obj._type;
	return (*this);
}

Cure::~Cure() {};

AMateria	*Cure::clone() const {return (new Cure(*this));}

void		Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}