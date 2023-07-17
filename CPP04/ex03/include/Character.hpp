/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 17:27:20 by antbarbi          #+#    #+#             */
/*   Updated: 2022/09/16 16:55:20 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"

class Character : public ICharacter
{
	public :

		Character(void);
		Character(std::string name);
		Character(Character const &obj);
		~Character(void);

		Character &operator = (Character const &obj);

		virtual	std::string const	&getName() const;
		virtual void				equip(AMateria *m);
		virtual void				unequip(int idx);
		virtual void				use(int idx, ICharacter& target);
		
		virtual void				showInventory() const;
		virtual void				showGroundloot() const;
		virtual void				setname(std::string name);
		virtual void				addGroundloot(int idx);

	private :

		std::string		_name;
		AMateria		*_inventory[4];
		AMateria		*_groundloot[100];
};

#endif