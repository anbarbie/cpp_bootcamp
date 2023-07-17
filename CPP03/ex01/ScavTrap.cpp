/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 18:51:08 by antbarbi          #+#    #+#             */
/*   Updated: 2022/08/19 11:18:50 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	_HP = 100;
	_EP = 50;
	_AD = 20;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap parametric constructor called" << std::endl;
	_name = name;
	_HP = 100;
	_EP = 50;
	_AD = 20;
}

ScavTrap::ScavTrap(ScavTrap const &obj)
{
	*this = obj;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
};

ScavTrap &ScavTrap::operator = (ScavTrap const &obj)
{
	std::cout << "ScavTrap assignement constructor has been called" << std::endl;
	_name = obj._name;
	_HP = obj._HP;
	_EP = obj._EP;
	_AD = obj._AD;
	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
	if (_HP == 0)
	{
		std::cout << "ScavTrap " << _name << " is dead and can not do anything!" << std::endl;
		return ;
	}
	if (_EP == 0)
	{
		std::cout << "ScavTrap " << _name << " is out of energy and can not attack!" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing "
	<< _AD << " points of damage! " << std::endl;
	_EP--;
}

void	ScavTrap::guardGate()
{
	std::cout << _name << " has entered gate keeper mode!" << std::endl;
}