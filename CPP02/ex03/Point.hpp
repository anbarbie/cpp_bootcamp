/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 13:46:43 by antbarbi          #+#    #+#             */
/*   Updated: 2022/08/09 13:39:17 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"


class Point
{
	public :

		Point(void);
		Point(const float x, const float y);
		Point(Point const &obj);
		~Point(void);

		Point	&operator = (Point const &obj);

		Fixed getFixedx(void) const;
		Fixed getFixedy(void) const;
		
	private :

		Fixed const _x;
		Fixed const _y;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif