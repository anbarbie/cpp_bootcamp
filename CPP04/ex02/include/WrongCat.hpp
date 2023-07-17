/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 20:59:47 by antbarbi          #+#    #+#             */
/*   Updated: 2022/08/11 21:02:41 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include <iostream>
# include <cstring>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public :

		WrongCat(void);
		WrongCat(WrongCat const &obj);
		~WrongCat(void);

		WrongCat &operator = (WrongCat const &obj);

		void makeSound() const;

};

#endif