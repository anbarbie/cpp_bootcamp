/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 16:49:43 by antbarbi          #+#    #+#             */
/*   Updated: 2022/09/06 17:36:22 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>
# include <iomanip>

template < typename T>
void	iter(T *tab, int size, void (*func)(T&))
{
	for (int i = 0; i < size; i++)
		func(tab[i]);
}

template < typename T>
void	plusone(T &a) {a++;}

#endif