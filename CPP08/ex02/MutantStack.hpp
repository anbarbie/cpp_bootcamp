/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 16:06:40 by antbarbi          #+#    #+#             */
/*   Updated: 2022/11/03 17:43:09 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <cstring>
# include <stack>

template < typename T>
class MutantStack : public std::stack<T>
{
	public :

		MutantStack<T>(void) {};
		MutantStack<T>(MutantStack const &obj) {*this = obj;}
		~MutantStack<T>(void) {};

		MutantStack<T> &operator = (MutantStack<T> const &obj)
		{
			(void)obj;
			return *this;
		}
		
		typedef	typename MutantStack<T>::container_type::iterator iterator;

		iterator	begin() {return	this->c.begin();}
		iterator	end() {return this->c.end();}
};

#endif