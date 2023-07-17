/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 13:21:31 by antbarbi          #+#    #+#             */
/*   Updated: 2022/08/03 15:25:41 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <cstring>
#include <fstream>

class Fixed
{
	public :
		
		Fixed(void);
		Fixed(int binp);
		Fixed(Fixed const & src);
		~Fixed(void);

		Fixed &operator = (Fixed const &src);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private :

		int						_value;
		const static int		_frac_bits = 8;
		
};

#endif