/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:46:57 by antbarbi          #+#    #+#             */
/*   Updated: 2022/09/16 15:44:26 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include <iostream>
# include <cstring>
# include "Animal.hpp"

class Cat : public Animal
{
	public :

		Cat(void);
		Cat(Cat const &obj);
		virtual	~Cat(void);

		Cat &operator = (Cat const &obj);

		virtual void makeSound() const;

};

#endif