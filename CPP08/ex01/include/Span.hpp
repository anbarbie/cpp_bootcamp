/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 11:46:45 by antbarbi          #+#    #+#             */
/*   Updated: 2023/01/24 12:49:09 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <cstring>
# include <algorithm>
# include <vector>
# include <iterator>

class Span
{
	public :

		Span(unsigned int N);
		Span(Span const &obj);
		~Span(void);

		Span &operator =(Span const &obj);

		void	printVec();
		void	addNumber(int number);

		template<class T>
		void	fillrange(T, T);
	
		int		shortestSpan() const;
		int		longestSpan() const;
		std::vector<int>::iterator		getBegin();
		std::vector<int>::iterator		getRealEnd();

	private :

		Span(void);
		std::vector<int>	_vect;

};

template<class T>
void	Span::fillrange(T begin, T end)
{
	this->_vect.insert(this->_vect.begin(), begin, end);
}

#endif