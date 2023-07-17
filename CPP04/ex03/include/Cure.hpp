/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 13:12:38 by antbarbi          #+#    #+#             */
/*   Updated: 2022/08/19 13:48:15 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"

class Cure : public AMateria
{
	public :

		Cure(void);
		Cure(Cure const &obj);
		virtual ~Cure(void);

		Cure &operator = (Cure const &obj);

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);

};

#endif