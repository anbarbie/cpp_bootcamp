/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:17:25 by antbarbi          #+#    #+#             */
/*   Updated: 2022/08/19 11:17:11 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _HP(10), _EP(10), _AD(0)
{
	std::cout << "ClapTrap default constructor has been called" << std::endl;
};

ClapTrap::ClapTrap(std::string name) :  _name(name), _HP(10), _EP(10), _AD(0)
{
	std::cout << "ClapTrap parametric constructor has been called" << std::endl;
};

ClapTrap::ClapTrap(ClapTrap const &obj)
{
	std::cout << "Claptrap copy constructor has been called" << std::endl;
	*this = obj;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor has been called" << std::endl;
};

ClapTrap &ClapTrap::operator = (ClapTrap const &obj)
{
	std::cout << "ClapTrap assignement constructor has been called" << std::endl;
	_name = obj._name;
	_HP = obj._HP;
	_EP = obj._EP;
	_AD = obj._AD;
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (_HP == 0)
	{
		std::cout << "ClapTrap " << _name << " is dead and can not do anything!" << std::endl;
		return ;
	}
	if (_EP == 0)
	{
		std::cout << "ClapTrap " << _name << " is out of energy and can not attack!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing "
	<< _AD << " points of damage! " << std::endl;
	_EP--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_HP == 0)
	{
		std::cout << _name << " is already dead, he can not take more damage!" << std::endl;
		return ;
	}
	std::cout << _name << " takes " << amount << " damage!" << std::endl;
	_HP -= amount;
	if (_HP < 0)
		_HP = 0;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_HP == 0)
	{
		std::cout << _name << " is dead and can not do anything!" << std::endl;
		return ;
	}
	if (_EP == 0)
	{
		std::cout << _name << " is out of energy and can not repair!" << std::endl;
		return ;
	}
	std::cout << _name << " is repairing himself for " << amount << " HP!" << std::endl;
	_EP--;
	_HP += amount;
	std::cout << _name << " HP is " << _HP << std::endl;
}

int		ClapTrap::getEP(void)
{
	return (_EP);
}

int		ClapTrap::getHP(void)
{
	return (_HP);
}