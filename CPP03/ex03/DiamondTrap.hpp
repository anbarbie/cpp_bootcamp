/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 12:52:50 by antbarbi          #+#    #+#             */
/*   Updated: 2022/08/11 17:53:20 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include <iostream>
# include <cstring>

class DiamondTrap : public FragTrap, public ScavTrap
{
	public :

		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const &obj);
		~DiamondTrap(void);

		DiamondTrap &operator = (DiamondTrap const &obj);

		using	ScavTrap::attack;

		void	whoAmI();

	private :

		std::string		_name;
};

#endif