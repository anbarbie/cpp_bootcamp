/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:46:57 by antbarbi          #+#    #+#             */
/*   Updated: 2022/09/16 15:59:08 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include <iostream>
# include <cstring>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	public :

		Cat(void);
		Cat(Cat const &obj);
		virtual ~Cat(void);

		Cat &operator = (Cat const &obj);
		virtual Animal &operator= (Animal const &obj);

		virtual void makeSound() const;
		Brain		*getBrain() const;

	private :

		Brain	*_brain;
};

#endif