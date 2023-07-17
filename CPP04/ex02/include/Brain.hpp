/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 13:19:06 by antbarbi          #+#    #+#             */
/*   Updated: 2022/08/12 16:11:58 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>
# include <cstring>
# include <iomanip>
# include "color.hpp"

class Brain
{
	public :

		Brain(void);
		Brain(Brain const &obj);
		~Brain(void);

		Brain &operator = (Brain const &obj);

		std::string		ideas[100];

};

#endif