/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:38:22 by antbarbi          #+#    #+#             */
/*   Updated: 2022/09/29 12:27:53 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#define	MAX 6

int main()
{
	std::cout << BOLDBLUE << "TEST 1: Given test" << RESET << std::endl;
	{
		const Animal* j = new Dog();
		std::cout << std::endl;
		const Animal* i = new Cat();
		std::cout << std::endl;
		delete j;//should not create a leak
		std::cout << std::endl;
		delete i;
		std::cout << std::endl;
		std::cout << "_______________________________________________________\n" << std::endl;
	}
	std::cout << BOLDBLUE << "TEST 2: My test" << RESET << std::endl;
	{
		Animal	*animal[MAX];
		Brain	*brain;
		
		for (int i = 0; i < MAX; i++)
		{
			if (i < MAX / 2)
				animal[i] = new Dog();
			else
				animal[i] = new Cat();
			std::cout << std::endl;
		}
		
		brain = animal[0]->getBrain();
		brain->ideas[0] = "I'm dog";
		brain->ideas[1] = "I love humans";
		brain->ideas[2] = "I love eating";
		brain->ideas[3] = "I love playing";

		brain = animal[MAX - 1]->getBrain();
		brain->ideas[0] = "I'm cat";
		brain->ideas[1] = "I hate humans";
		brain->ideas[2] = "I hate life";
		brain->ideas[3] = "I hate other animals";
		
		std::cout << BOLDBLUE << "Copy dog to cat test" << RESET << std::endl;
		for (int i = 0; i < 4; i++)
			std::cout << "DOG : idea [" << i << "] " << animal[0]->getBrain()->ideas[i] << std::endl;
		for (int i = 0; i < 4; i++)
			std::cout << "CAT : idea [" << i << "] " << animal[MAX - 1]->getBrain()->ideas[i] << std::endl;
		
		std::cout << std::endl;
		*(animal[MAX - 1]) = *(animal[0]);
		std::cout << std::endl;
		*(animal[MAX - 2]) = *(animal[MAX - 1]);
		std::cout << std::endl;

		for (int i = 0; i < 4; i++)
			std::cout << "DOG : idea [" << i << "] " << animal[0]->getBrain()->ideas[i] << std::endl;
		for (int i = 0; i < 4; i++)
			std::cout << "CAT : idea [" << i << "] " << animal[MAX - 1]->getBrain()->ideas[i] << std::endl;

		std::cout << std::endl;
		
		std::cout << BOLDBLUE << "Deep copy test" << RESET << std::endl;
		
		std::cout << "DOG : " << animal[0]->getBrain() << std::endl;
		std::cout << "CAT : " << animal[MAX - 1]->getBrain() << std::endl;
		
		std::cout << BOLDBLUE << "Copy works properly??" <<  RESET << std::endl;
		
		Dog basic;
		Dog tmp = basic;
		
		std::cout << std::endl;
		
		Cat	basicat;
		Cat tmp2 = basicat;

		std::cout << std::endl;
		
		for (int i = 0; i < MAX; i++)
			delete animal[i];
	}
	return 0;
}