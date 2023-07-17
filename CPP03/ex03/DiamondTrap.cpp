/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 12:53:34 by antbarbi          #+#    #+#             */
/*   Updated: 2022/08/11 19:31:17 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
 	_HP = FragTrap::setHP();
	_AD = FragTrap::setAD();
	_EP = ScavTrap::setEP();
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(std::string(name).append("_clap_name")), FragTrap(), ScavTrap(), _name(name)
{
	std::cout << "DiamondTrap parametric constructor called" << std::endl;
	_HP = FragTrap::setHP();
	_AD = FragTrap::setAD();
	_EP = ScavTrap::setEP();
}

DiamondTrap::DiamondTrap(DiamondTrap const &obj)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = obj;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator = (DiamondTrap const &obj)
{
	(void)obj;
	std::cout << "I do nothing" << std::endl;
	return (*this);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "My ClapTrap name is " << ClapTrap::_name << " but my real name is " << _name << std::endl;
}

//The problem is that during initialisation since the variable is present in grandparent during parents construction
//the value from the grandparent variables get overwritten, have to find a way around it