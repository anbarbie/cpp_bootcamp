/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:38:22 by antbarbi          #+#    #+#             */
/*   Updated: 2022/09/16 15:39:17 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"


int main()
{
const Animal* meta = new Animal();
std::cout << std::endl;
const Animal* j = new Dog();
std::cout << std::endl;
const Animal* i = new Cat();
std::cout << std::endl;
const WrongAnimal* x = new WrongCat();
std::cout << std::endl;

std::cout << meta->getType() << " " << std::endl;
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
std::cout << x->getType() << " " << std::endl << std::endl;

i->makeSound(); //will output the cat sound!
j->makeSound(); //will output the dog sound!
x->makeSound(); //will output generic wrong sound!
meta->makeSound(); //will make generial animal sound!
std::cout << std::endl;

delete meta;
delete j;
delete i;
delete x;
return 0;
}