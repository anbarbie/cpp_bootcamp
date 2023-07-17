/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 13:07:29 by antbarbi          #+#    #+#             */
/*   Updated: 2022/09/05 15:29:15 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP
# include <iostream>
# include <cstring>
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# include "color.hpp"

class Base
{
	public :

		Base(void);
		virtual ~Base(void) = 0;

};

#endif