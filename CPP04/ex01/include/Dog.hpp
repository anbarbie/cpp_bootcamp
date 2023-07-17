/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:45:54 by antbarbi          #+#    #+#             */
/*   Updated: 2022/09/16 15:59:15 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include <iostream>
# include <cstring>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	public :

		Dog(void);
		Dog(Dog const &obj);
		virtual ~Dog(void);

		virtual Dog &operator = (Dog const &obj);
		virtual Animal &operator= (Animal const &obj);
		
		virtual void		makeSound() const;
		virtual Brain		*getBrain() const;
	
	private :

		Brain	*_brain;

};

#endif