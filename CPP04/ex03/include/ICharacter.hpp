/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 13:10:37 by antbarbi          #+#    #+#             */
/*   Updated: 2022/09/29 13:26:46 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP
# include <iostream>
# include <cstring>
# include "AMateria.hpp"

class AMateria;

class ICharacter
{
	public:
	
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void				equip(AMateria* m) = 0;
		virtual void				unequip(int idx) = 0;
		virtual void				use(int idx, ICharacter& target) = 0;
		
/* 		virtual void				showInventory() const = 0;
		virtual void				showGroundloot() const = 0; */
};

#endif