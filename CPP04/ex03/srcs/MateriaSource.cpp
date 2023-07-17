/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 18:06:49 by antbarbi          #+#    #+#             */
/*   Updated: 2022/08/20 17:11:06 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "color.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_Materia[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &obj) {*this = obj;};

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (_Materia[i] != NULL)
			delete _Materia[i];
	}
}

MateriaSource &MateriaSource::operator = (MateriaSource const &obj)
{
	for (int i = 0; i < 4; i++)
		if(_Materia[i] != NULL)
			delete	_Materia[i];
	for (int i = 0; i < 4; i++)
		_Materia[i] = obj._Materia[i];
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *tolearn)
{
	for (int i = 0; i < 4; i++)
	{
		if (_Materia[i] == NULL)
		{
			_Materia[i] = tolearn;
			break ;
		}
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4 && _Materia[i]; i++)
	{
		if (type == _Materia[i]->getType())
			return (_Materia[i]->clone());
	}
	return NULL;
}

void	MateriaSource::showMateria() const
{
	for (int i = 0; i < 4; i++)
		if (_Materia[i] != NULL)
			std::cout << "Slot [" << i << "] " << _Materia[i]->getType() << std::endl;
}