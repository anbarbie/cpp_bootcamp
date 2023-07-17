/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 16:49:15 by antbarbi          #+#    #+#             */
/*   Updated: 2022/10/22 18:29:26 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP
# include <iostream>
# include <iomanip>
# include <cstring>
# include <limits>
# include <cstdlib>

class Converter
{
	public :

		Converter(void);
		Converter(std::string type);
		Converter(Converter const &obj);
		~Converter(void);

		Converter &operator = (Converter const &obj);

		std::string		gettrueType();
		void			printVar();	

	private :

		
		std::string		_trueType;
		std::string		_type;
		
		char			_charConv;
		int				_intConv;
		float			_floatConv;
		double			_doubleConv;
		long double		_ldoubleConv;
		
		void			setTruetype();

		void			checkPseudo_Char();
		void			checkString(const char *str);
		void			convert();

		bool			convToChar();		
		bool			convToInt();
		bool			convToFloat();
		bool			convToDouble();

		void			printChar();
		void			printInt();
		void			printFloat();
		void			printDouble();
};

#endif