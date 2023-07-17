/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:41:03 by antbarbi          #+#    #+#             */
/*   Updated: 2022/09/16 17:20:43 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <cstring>
# include "Brain.hpp"

class Animal
{
	public :

		virtual ~Animal(void) = 0;

		virtual Animal &operator = (Animal const &rhs);

		virtual void		makeSound() const = 0;
		virtual Brain		*getBrain() const = 0;	
		const std::string	getType() const;

	protected :

		Animal(void);
		Animal(std::string name);
		Animal(Animal const &obj);
		std::string		_type;

};
#endif