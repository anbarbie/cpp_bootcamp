 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 11:46:43 by antbarbi          #+#    #+#             */
/*   Updated: 2022/09/12 16:03:38 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {};

Span::Span(unsigned int N) {_vect.reserve(N);}

Span::Span(Span const &obj) {*this = obj;}

Span::~Span() {};

Span &Span::operator =(Span const &obj)
{
	if (this == &obj)
		return (*this);
	_vect = obj._vect;
	return (*this);
}

void	Span::addNumber(int number)
{
	if (_vect.size() >= _vect.capacity())
		throw std::overflow_error("Error: Vector max size reached");
	_vect.push_back(number);
}

int		Span::shortestSpan() const
{
	std::vector<int> 			tmp;
	std::vector<int>::iterator	it;
	int							result;

	if (_vect.size() < 2)
		throw std::overflow_error("Error: Vector span is too small");
			
	tmp = _vect;
	sort(tmp.begin(), tmp.end());
	it = tmp.begin();

	result = *(it + 1) - *it;
	for (; it != (tmp.end() - 1); it++)
		if (*(it + 1) - *it < result)
			result = *(it + 1) - *it;
	
	return result;
}

int		Span::longestSpan() const
{
	std::vector<int> 			tmp;

	if (_vect.size() < 2)
		throw std::overflow_error("Error: Vector span is too small");
		
	tmp = _vect;
	std::sort(tmp.begin(), tmp.end());
	
	return (tmp.back() - tmp.front());
}

std::vector<int>::iterator		Span::getBegin() {return (_vect.begin());}

std::vector<int>::iterator		Span::getRealEnd()
{
	std::vector<int>::iterator		it;

	it = _vect.begin();
	for (unsigned long i = 0; i < _vect.capacity(); i++)
		it++;
	_vect.end() = it;
	return (it);
}

void		Span::printVec()
{
	std::vector<int>::iterator		it;

	it = _vect.begin();
	for (; it != _vect.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl << "size is " << _vect.size() << std::endl;
	std::cout << "capacity is " << _vect.capacity() << std::endl;
}