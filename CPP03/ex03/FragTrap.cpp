/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 12:27:19 by antbarbi          #+#    #+#             */
/*   Updated: 2022/08/19 11:21:12 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap default constructor called" << std::endl;
	this->_HP = 100;
	this->_EP = 100;
	this->_AD = 30;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap parametric constructor called" << std::endl;
	this->_name = name;
	this->_HP = 100;
	this->_EP = 100;
	this->_AD = 30;
}

FragTrap::FragTrap(FragTrap const &obj)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = obj;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap &FragTrap::operator = (FragTrap const &obj)
{
	std::cout << "FragTrap assignement constructor has been called" << std::endl;
	_name = obj._name;
	_HP = obj._HP;
	_EP = obj._EP;
	_AD = obj._AD;
	return (*this);
}

void	FragTrap::attack(const std::string &target)
{
	if (_HP == 0)
	{
		std::cout << "FragTrap " << _name << " is dead and can not do anything!" << std::endl;
		return ;
	}
	if (_EP == 0)
	{
		std::cout << "FragTrap " << _name << " is out of energy and can not attack!" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << _name << " attacks " << target << ", causing "
	<< _AD << " points of damage! " << std::endl;
	_EP--;
}

void	FragTrap::highFiveGuys()
{
	std::cout << _name << " asks people around him for a high five" << std::endl;
}

int		FragTrap::setHP()
{
	_HP = 100;
	return (_HP);
}

int		FragTrap::setAD()
{
	_AD = 30;
	return (_AD);
}