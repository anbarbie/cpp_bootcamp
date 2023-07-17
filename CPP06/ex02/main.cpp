/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 13:06:56 by antbarbi          #+#    #+#             */
/*   Updated: 2022/11/25 12:18:34 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"
# include <unistd.h>

Base		*generate(void)
{
	int		gen = rand() % 3;
	
	switch (gen)
	{
		case 0 :
			std::cout << "A has been generated" << std::endl;
			return new A();
			break;
		
		case 1 :
			std::cout << "B has been generated" << std::endl;
			return new B();
			break;
		
		case 2 :
			std::cout << "C has been generated" << std::endl;
			return new C();
			break;
		
		default:
			return NULL;
			break;
	}
}

void		identify(Base* p)
{
	A	*a;
	B	*b;
	C	*c;

	a = dynamic_cast<A*>(p);
	if (a != NULL)
		std::cout << "A" << std::endl;
	b = dynamic_cast<B*>(p);
	if (b != NULL)
		std::cout << "B" << std::endl;
	c = dynamic_cast<C*>(p);
	if (c != NULL)
		std::cout << "C" << std::endl;
}

void		identify(Base& p)
{
	try 
	{
		A &a = dynamic_cast<A&>(p);
		static_cast<void>(a);
		std::cout << "A" << std::endl;
	}
	catch (std::exception &e)
	{
	}
	try 
	{
		B &b = dynamic_cast<B&>(p);
		static_cast<void>(b);
		std::cout << "B" << std::endl;
	}
	catch (std::exception &e)
	{
	}
	try 
	{
		C &c = dynamic_cast<C&>(p);
		static_cast<void>(c);
		std::cout << "C" << std::endl;
	}
	catch (std::exception &e)
	{
	}
}

int	main()
{
	srand (time(0));
	Base *ptr;
	
	std::cout << BLUE << "Pointer test" << RESET << std::endl;
	for (int i = 0; i < 5; i++)
	{
		ptr = generate();
		std::cout << "Identify is ";
		identify(ptr);
		delete ptr;
		usleep(1000);
	}
	std::cout << BLUE << "Reference test" << RESET << std::endl;
	for (int i = 0; i < 5; i++)
	{
		Base	&ref = *generate();
		std::cout << "Identify is ";
		identify(ref);
		delete &ref;
		usleep(1000);
	}
	return (0);
}