/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 12:53:55 by antbarbi          #+#    #+#             */
/*   Updated: 2022/08/19 13:44:48 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : _type(type) {};

AMateria::~AMateria() {};

std::string const	&AMateria::getType() const {return _type;};

void	AMateria::use(ICharacter &target) {(void)target;};