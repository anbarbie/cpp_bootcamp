/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 13:44:37 by antbarbi          #+#    #+#             */
/*   Updated: 2022/08/07 13:46:11 by antbarbi         ###   ########.fr       */
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
		Fixed(Fixed const &obj);
		~Fixed(void);

		Fixed &operator = (Fixed const &obj);
		bool operator > (Fixed const &obj) const;
		bool operator < (Fixed const &obj) const;
		bool operator >= (Fixed const &obj) const;
		bool operator <= (Fixed const &obj) const;
		bool operator == (Fixed const &obj) const;
		bool operator != (Fixed const &obj) const;

		Fixed operator + (Fixed const &obj);
		Fixed operator - (Fixed const &obj);
		Fixed operator * (Fixed const &obj);
		Fixed operator / (Fixed const &obj);

		Fixed &operator ++ ();
		Fixed operator ++ (int);
		Fixed &operator -- ();
		Fixed operator -- (int);

		int		getRawBits(void) const;
		void	setRawBits(const int raw);
		float	toFloat(void) const;
		int		toInt(void)	const;
		
		static Fixed	&min(Fixed &v1, Fixed &v2);
		static Fixed	const &min(Fixed const &v1, Fixed const &v2);
		static Fixed	&max(Fixed &v1, Fixed &v2);
		static Fixed	const &max(Fixed const &v1, Fixed const &v2);
		
	private :

		int						_value;
		static int const		_frac_bits = 8;
		
};

std::ostream &operator<< (std::ostream &o, Fixed const &rhs);

#endif