/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 16:49:56 by antbarbi          #+#    #+#             */
/*   Updated: 2022/11/25 12:09:09 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

Converter::Converter() {};

Converter::Converter(std::string type) : _type(type)
{
	_trueType = "";
	_charConv = 0;
	_intConv = 0;
	_floatConv = 0;
	_doubleConv = 0;
	setTruetype();
	convert();
};

Converter::Converter(Converter const &obj) {*this = obj;}

Converter::~Converter() {};

Converter &Converter::operator = (Converter const &obj)
{
	_trueType = obj._trueType;
	_type = obj._type;
	_charConv = obj._charConv;
	_intConv = obj._intConv;
	_floatConv = obj._floatConv;
	_doubleConv = obj._doubleConv;
	_ldoubleConv = obj._ldoubleConv;
	return (*this);
}

void		Converter::setTruetype()
{
	checkPseudo_Char();
	checkString(_type.c_str());
}

void	Converter::checkPseudo_Char()
{
	std::string		isfloat[] = {"-inff", "+inff", "nanf"};
	std::string		isdouble[] = {"-inf", "+inf", "nan"};

	for (int i = 0; i < 3; i++)
	{
		if (_type == isfloat[i])
			_trueType = "float";
		if (_type == isdouble[i])
			_trueType = "double";
	}
	if (_trueType == "" && _type.size() == 1 && (_type < "0" || _type > "9"))
		_trueType = "char";
}

void	Converter::checkString(const char *str)
{
	int		dot = 0;
	int		f = 0;
	int		notnum = 0;
	
	if (str[0] == '-' && str[1])
		notnum--;
	for (int i = 0; str[i]; i++)
	{
		if (str[i] == '.')
			dot++;
		else if (str[i] == 'f')
			f++;
		else if (str[i] > '9' || str[i] < '0')
			notnum++;
	}
	if (f == 1 && dot == 1 && !notnum)
		_trueType = "float";
	else if (dot == 1 && !f && !notnum)
		_trueType = "double";
	else if (!dot && !f && !notnum)
		_trueType = "int";
	else if (_trueType == "")
		_trueType = "unknown";
}

void	printUnknown()
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: impossible" << std::endl;
	std::cout << "double: impossible" << std::endl;
}

void		Converter::printVar()
{
	if (_trueType == "unknown")
		printUnknown();
	if (_trueType == "char")
		printChar();
	if (_trueType == "int")
		printInt();
	if (_trueType == "float")
		printFloat();
	if (_trueType == "double")
		printDouble();
}

void		Converter::printChar()
{
	if (_charConv < 33 || _charConv > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << _charConv << std::endl;
	std::cout << "int: " << static_cast<int>(_charConv) << std::endl;
	std::cout << "float: " << static_cast<float>(_charConv) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(_charConv) << ".0" << std::endl;
}

void		Converter::printInt()
{
	if (_intConv > 127 || _intConv < 0)
		std::cout << "char: impossible" << std::endl;
	else if (_intConv < 33 || _intConv > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(_intConv) << std::endl;
	std::cout << "int: " << _intConv << std::endl;
	std::cout << std::fixed << std::setprecision(0) << "float: " << static_cast<float>(_intConv) << ".0f" << std::endl;
	std::cout << std::fixed << "double: " << static_cast<double>(_intConv) << ".0" << std::endl;
}

void		Converter::printFloat()
{
	if (_floatConv > 127 || _floatConv < 0 || _floatConv - static_cast<int>(_floatConv) != 0)
		std::cout << "char: impossible" << std::endl;
	else if (_floatConv < 33 || _floatConv > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(_floatConv) << std::endl;
	if (_floatConv - static_cast<int>(_floatConv) != 0 || !convToInt())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(_floatConv) << std::endl;
	if (_floatConv - static_cast<int>(_floatConv) == 0)
		std::cout << std::fixed << std::setprecision(0) << "float: " << _floatConv << ".0f" << std::endl;
	else
		std::cout << std::fixed << std::setprecision(1) << "float: " << _floatConv << "f" << std::endl;
	if (_floatConv - static_cast<int>(_floatConv) == 0)
		std::cout << "double: " << static_cast<double>(_floatConv) << ".0" << std::endl;
	else
		std::cout << "double: " << static_cast<double>(_floatConv) << std::endl;
}

void		Converter::printDouble()
{
	std::cout << std::fixed;
	if (_floatConv > 127 || _doubleConv < 0 || _doubleConv - static_cast<int>(_doubleConv) != 0)
		std::cout << "char: impossible" << std::endl;
	else if (_doubleConv < 33 || _doubleConv > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(_doubleConv) << std::endl;
	if (_doubleConv - static_cast<int>(_doubleConv) != 0)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(_doubleConv) << std::endl;
	if (_doubleConv - static_cast<int>(_doubleConv) == 0)
		std::cout << std::fixed << std::setprecision(0) << "float: " << static_cast<float>(_doubleConv) << ".0f" << std::endl;
	else
		std::cout << std::fixed << std::setprecision(1) << "float: " << static_cast<float>(_doubleConv) << "f" << std::endl;
	if (_doubleConv - static_cast<int>(_doubleConv) == 0)
		std::cout << "double: " << _doubleConv << ".0" << std::endl;
	else
		std::cout << std::fixed << std::setprecision(1) << "double: " << _doubleConv << std::endl;
}

void		Converter::convert()
{
	if (_trueType == "char")
		if (!convToChar())
			_trueType = "unknown";
	if (_trueType == "int")
		if (!convToInt())
			_trueType = "float";
	if (_trueType == "float")
		if (!convToFloat())
			_trueType = "double";
	if (_trueType == "double")
		if (!convToDouble())
			_trueType = "double";
}

bool		Converter::convToChar()
{
	_charConv = _type.c_str()[0];
	if (_charConv < 0 || _charConv > 127)
		return false;
	else
		return true;
}

bool		Converter::convToInt()
{
	_ldoubleConv = strtold(_type.c_str(), NULL);
	if (_ldoubleConv > std::numeric_limits<int>::max() || _ldoubleConv < std::numeric_limits<int>::min())
		return false;
	_intConv = static_cast<int>(strtold(_type.c_str(), NULL));
	return true;
}

bool		Converter::convToFloat()
{
	_ldoubleConv = strtold(_type.c_str(), NULL);
	if (!(_ldoubleConv == std::numeric_limits<long double>::infinity()) && !(_ldoubleConv == -std::numeric_limits<long double>::infinity()))
		if (_ldoubleConv > std::numeric_limits<float>::max() || _ldoubleConv < -std::numeric_limits<float>::max())
			return false;
	_floatConv = static_cast<float>(strtold(_type.c_str(), NULL));
	return true;
}

bool		Converter::convToDouble()
{
	_ldoubleConv = strtold(_type.c_str(), NULL);
	_doubleConv = static_cast<double>(strtold(_type.c_str(), NULL));
	if (!(_ldoubleConv == std::numeric_limits<long double>::infinity()) && !(_ldoubleConv == -std::numeric_limits<long double>::infinity()))
		if (_ldoubleConv > std::numeric_limits<double>::max() || _ldoubleConv < -std::numeric_limits<double>::max())
			return false;
	_doubleConv = static_cast<double>(strtold(_type.c_str(), NULL));
	return true;
}
