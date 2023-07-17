/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 16:13:57 by antbarbi          #+#    #+#             */
/*   Updated: 2022/08/07 13:09:47 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main()
{
	Fixed a;
	Fixed f(1.0f);
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed const c( Fixed(12.5f) / Fixed(2));
	Fixed const d( Fixed(16.8f) - Fixed(3));
	Fixed const e( Fixed(5.7f) + Fixed(15.2f));
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	
	std::cout << "\nExtended tests" << std::endl;
	std::cout << Fixed::min( a, b) << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << e << std::endl;
	std::cout << f << std::endl;
	std::cout << --f << std::endl;
	std::cout << f << std::endl;
	std::cout << f-- << std::endl;
	std::cout << f << std::endl;
	return 0;
}