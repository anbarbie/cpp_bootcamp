/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:17:27 by antbarbi          #+#    #+#             */
/*   Updated: 2022/08/11 16:40:27 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <cstring>

class ClapTrap
{
	public :

		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &obj);
		~ClapTrap(void);

		ClapTrap &operator = (ClapTrap const &obj);

		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		int		getEP(void);
		int		getHP(void);

	protected :

		std::string		_name;
		int				_HP;
		int				_EP;
		int				_AD;

};

#endif