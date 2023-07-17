/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:02:05 by antbarbi          #+#    #+#             */
/*   Updated: 2022/08/03 17:05:54 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <cstring>
#include <fstream>
#include <cmath>

class Fixed
{
	public :
		
		Fixed(void);
		Fixed(const int i);
		Fixed(const float f);
		Fixed(Fixed const &src);
		~Fixed(void);

		Fixed &operator = (Fixed const &src);

		int		getRawBits(void) const;
		void	setRawBits(const int raw);
		float	toFloat(void) const;
		int		toInt(void)	const;

	private :

		int						_value;
		static int const		_frac_bits = 8;
		
};

std::ostream &operator<< (std::ostream &o, Fixed const &rhs);

#endif