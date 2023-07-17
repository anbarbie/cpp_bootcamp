/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:31:50 by antbarbi          #+#    #+#             */
/*   Updated: 2022/08/20 16:49:04 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public :

		MateriaSource(void);
		MateriaSource(MateriaSource const &obj);
		~MateriaSource(void);

		MateriaSource &operator = (MateriaSource const &obj);

		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);
		virtual	void	showMateria() const;

	private :

		AMateria	*_Materia[4];

};

#endif