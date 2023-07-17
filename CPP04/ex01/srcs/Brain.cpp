/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 13:18:35 by antbarbi          #+#    #+#             */
/*   Updated: 2022/09/15 13:18:14 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << YELLOW << "-->Brain default contructor has been called" << RESET << std::endl;
}

Brain::Brain(Brain const &obj)
{
	std::cout << YELLOW << "-->Brain copy constructor has been called" << RESET << std::endl;
	*this = obj;
}

Brain::~Brain(void)
{
	std::cout << YELLOW << "-->Brain destructor has been called" << RESET << std::endl;
}

Brain &Brain::operator = (Brain const &obj)
{
	std::cout << "Brain assignement operator has been called" << std::endl;
	if (this == &obj)
		return (*this);
	for (int i = 0; i < 100; i++)
		this->ideas[i] = obj.ideas[i];
	return (*this);
}
