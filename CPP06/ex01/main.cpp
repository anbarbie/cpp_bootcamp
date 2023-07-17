/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 12:48:27 by antbarbi          #+#    #+#             */
/*   Updated: 2022/09/05 13:38:16 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.hpp"

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

int	main()
{
	Data*	test = new Data;
	Data*	get_data;
	uintptr_t	value;
	
	std::cout << test << std::endl;
	value = serialize(test);
	get_data = deserialize(value);
	std::cout << get_data << std::endl;
	delete test;
	return (0);
}