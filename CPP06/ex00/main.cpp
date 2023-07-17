/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 14:06:50 by antbarbi          #+#    #+#             */
/*   Updated: 2022/11/25 12:48:18 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"
//use atof 

int	main(int ac, char **av)
{
	if (ac != 2)
		return (1);
	Converter test(av[1]);
	
	test.printVar();
	return (0);
}