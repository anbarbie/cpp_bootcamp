/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 13:53:22 by antbarbi          #+#    #+#             */
/*   Updated: 2022/08/09 13:38:01 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	bool side[3];

	side[0] = (point.getFixedx() - b.getFixedx()) * (a.getFixedy() - b.getFixedy()) - (a.getFixedx() - b.getFixedx()) * (point.getFixedy() - b.getFixedy()) > 0;
	side[1] = (point.getFixedx() - c.getFixedx()) * (b.getFixedy() - c.getFixedy()) - (b.getFixedx() - c.getFixedx()) * (point.getFixedy() - c.getFixedy()) > 0;
	side[2] = (point.getFixedx() - a.getFixedx()) * (c.getFixedy() - a.getFixedy()) - (c.getFixedx() - a.getFixedx()) * (point.getFixedy() - a.getFixedy()) > 0;

	return (side[0] == side[1] && side[1] == side[2]);
}