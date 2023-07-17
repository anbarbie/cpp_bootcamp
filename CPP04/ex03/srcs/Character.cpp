/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:11:59 by antbarbi          #+#    #+#             */
/*   Updated: 2022/09/29 13:26:27 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "color.hpp"

Character::Character() {};

Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	for (int i = 0; i < 100; i++)
		_groundloot[i] = NULL;
	return ;
}

Character::Character(Character const &obj)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	for (int i = 0; i < 100; i++)
		_groundloot[i] = NULL;
	*this = obj;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (_inventory[i])
			delete _inventory[i];
	for (int i = 0; i < 100; i++)
		if (_groundloot[i])
			delete _groundloot[i];
}

Character &Character::operator = (Character const &obj)
{
	if (this == &obj)
		return (*this);

	_name = obj._name;

	for (int i = 0; i < 4; i++)
		if (_inventory[i])
			delete _inventory[i];
	for (int i = 0; i < 100; i++)
		if (_groundloot[i])
			delete _groundloot[i];

	for (int i = 0; i < 4; i++)
		if (obj._inventory[i])
		_inventory[i] = obj._inventory[i]->clone();
	for (int i = 0; i < 100; i++)
		if (obj._groundloot[i])
			_groundloot[i] = obj._groundloot[i]->clone();
	return (*this);
}

std::string		const &Character::getName() const {return _name;};

void	Character::equip(AMateria *m)
{
	int	cpt = 0;
	
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			cpt++;
			_inventory[i] = m;
			break ;
		}
	}
	if (cpt == 0)
		delete m;
}

void	Character::addGroundloot(int idx)
{
	for (int i = 0; i < 100; i++)
	{
		if (_groundloot[i] == NULL)
		{
			_groundloot[i] = _inventory[idx];
			break ;
		}
	}
	if (_groundloot[99] != NULL)
	{
		std::cout << RED << "Ground materia waste dissapearing from the floor..." << RESET << std::endl;
		for (int i = 0; i < 100; i++)
			if (_groundloot[i] != NULL)
				delete _groundloot[i];
		for (int i = 0; i < 100; i++)
			_groundloot[i] = NULL;
	}
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return ;
	addGroundloot(idx);
	_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3)
		return ;
	if (_inventory[idx] != NULL)
	{
		_inventory[idx]->use(target);
		unequip(idx);
	}
}

void	Character::showInventory() const
{
	std::cout << BOLDBLUE << " INVENTORY" << RESET << std::endl;
	for (int i = 0; i < 4; i++)
		if (_inventory[i] != NULL)
		{
			std::cout << i << _inventory[i]->getType() << std::endl;
			std::cout << _inventory[i] << std::endl;
		}
}

void	Character::showGroundloot() const
{
	std::cout << BOLDRED << "GROUNDLOOT" << RESET << std::endl;
	for (int i = 0; i < 100; i++)
	{
		if (_groundloot[i] != NULL)
		{
			std::cout << i << _groundloot[i]->getType() << std::endl;
			std::cout << _groundloot[i] << std::endl;
		}
	}
}

void	Character::setname(std::string name) {_name = name;};