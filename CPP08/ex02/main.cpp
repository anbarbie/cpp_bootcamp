/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 16:06:34 by antbarbi          #+#    #+#             */
/*   Updated: 2023/01/24 13:54:05 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include "color.hpp"
#include <list>

int	main()
{
	std::cout << BOLDBLUE << "Test 1 : Given main" << RESET << std::endl;
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << "top is " << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "size is " << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		std::cout << "iteration" << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	std::cout << BOLDBLUE << "Test 2 : Replaced Mutant stack by list" << RESET << std::endl;
	{
		std::list<int> mstack;
		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << "top is " << *--mstack.end() << std::endl;
		mstack.pop_back();
		std::cout << "size is " << mstack.size() << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		//[...]
		mstack.push_back(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		std::cout << "iteration" << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::list<int> s(mstack);
	}
	std::cout << BOLDBLUE << "Test 2 : stack to list" << RESET << std::endl;
	{
		MutantStack<int> mstack;
		std::list<int> dest;
		mstack.push(5);
		mstack.push(17);
		mstack.push(50);
		mstack.push(80);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		dest.insert(dest.begin(), it, ite);
		
		std::list<int>::iterator	lit = dest.begin();
		while (lit != dest.end())
		{
			std::cout << *lit << std::endl;
			++lit;
		}	
	}
	return (0);
}