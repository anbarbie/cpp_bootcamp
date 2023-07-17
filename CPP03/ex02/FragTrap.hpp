/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 12:27:17 by antbarbi          #+#    #+#             */
/*   Updated: 2022/08/11 18:28:17 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include <cstring>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public :

		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const &obj);
		~FragTrap(void);

		FragTrap &operator = (FragTrap const &obj);

		void	attack(const std::string &target);
		void	highFiveGuys();
};

#endif