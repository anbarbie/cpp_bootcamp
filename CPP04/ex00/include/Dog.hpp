/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:45:54 by antbarbi          #+#    #+#             */
/*   Updated: 2022/09/16 15:44:34 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include <iostream>
# include <cstring>
# include "Animal.hpp"

class Dog : public Animal
{
	public :

		Dog(void);
		Dog(Dog const &obj);
		virtual	~Dog(void);

		Dog &operator = (Dog const &obj);
		
		virtual void makeSound() const;

};

#endif