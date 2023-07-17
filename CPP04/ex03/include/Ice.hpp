/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 13:12:30 by antbarbi          #+#    #+#             */
/*   Updated: 2022/08/19 13:47:46 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"

class Ice : public AMateria
{
	public :

		Ice(void);
		Ice(Ice const &obj);
		virtual ~Ice(void);

		Ice &operator = (Ice const &obj);

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);

};

#endif