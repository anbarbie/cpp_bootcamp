/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 18:09:37 by antbarbi          #+#    #+#             */
/*   Updated: 2023/01/18 16:09:00 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <vector>
# include <iterator>
# include <algorithm>

template < typename T >
typename T::iterator		easyfind(T &container, int	i)
{
	return (find(container.begin(), container.end(), i));
}

#endif