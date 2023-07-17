/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 17:39:16 by antbarbi          #+#    #+#             */
/*   Updated: 2022/12/19 10:48:29 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# include <cstring>

template <typename T>
class Array
{
	public :
		
		Array<T>() : _size(0), _array(NULL) {};
		Array<T>(unsigned int size) : _size(size) {_array = new T[_size]();}
		Array<T>(Array<T> const &obj)  : _size(0), _array(NULL) {*this = obj;}
		~Array<T>()
		{
			if (_size >= 0)
					delete []_array;
		}

		Array<T> &operator = (Array<T> const &obj)
		{
			if (this == &obj)
				return (*this);
			if (_array)
				delete []_array;

			_size = obj._size;
			_array = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
				_array[i] = obj._array[i];
			return *this;
		}

		T &operator [] (int i)
		{
			if (i < 0 || i >= static_cast<int>(_size))
				throw std::exception();
			return _array[i];
		}

		unsigned int	size(void) const {return _size;}		
		

	private :

		unsigned int		_size;
		T					*_array;
};

#endif