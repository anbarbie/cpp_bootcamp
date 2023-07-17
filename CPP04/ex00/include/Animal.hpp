/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:41:03 by antbarbi          #+#    #+#             */
/*   Updated: 2022/08/18 12:44:58 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <cstring>

class Animal
{
	public :

		Animal(void);
		Animal(std::string name);
		Animal(Animal const &obj);
		virtual ~Animal(void);

		Animal &operator = (Animal const &obj);

		virtual void		makeSound() const;	
		const std::string	getType() const;	

	protected :

		std::string		_type;

};

#endif