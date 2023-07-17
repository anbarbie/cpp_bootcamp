/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:41:03 by antbarbi          #+#    #+#             */
/*   Updated: 2022/09/16 15:58:07 by antbarbi         ###   ########.fr       */
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

		Animal(void);
		Animal(std::string name);
		Animal(Animal const &obj);
		virtual ~Animal(void);

		virtual Animal &operator = (Animal const &rhs);

		virtual void		makeSound() const;
		const std::string	getType() const;

		virtual Brain		*getBrain() const = 0;
		
	protected :

		std::string		_type;

};

#endif