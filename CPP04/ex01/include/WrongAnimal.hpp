/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 20:59:31 by antbarbi          #+#    #+#             */
/*   Updated: 2022/08/11 21:02:28 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>
# include <cstring>

class WrongAnimal
{
	public :

		WrongAnimal(void);
		WrongAnimal(std::string name);
		WrongAnimal(WrongAnimal const &obj);
		~WrongAnimal(void);

		WrongAnimal &operator = (WrongAnimal const &obj);

		void				makeSound() const;	
		const std::string	getType() const;	

	protected :

		std::string		_type;

};

#endif