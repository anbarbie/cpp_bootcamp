/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 18:51:10 by antbarbi          #+#    #+#             */
/*   Updated: 2022/08/11 19:27:05 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include <cstring>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public :

		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &obj);
		~ScavTrap(void);

		ScavTrap &operator = (ScavTrap const &obj);

		void	attack(const std::string &target);
		void 	guardGate();
		int		setEP();
};

#endif