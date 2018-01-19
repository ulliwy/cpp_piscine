/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 13:58:27 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/18 20:57:56 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <iostream>
#include <vector>

int main()
{
	MutantStack<int> mstack;
	mstack.push(1);
	mstack.push(2);
	std::cout << "Top value: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size after pop: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(4);
	mstack.push(5);
	mstack.push(6);
	MutantStack<int>::iterator it = mstack.begin();
	std::cout << "First: " << *it << std::endl;
	MutantStack<int>::iterator ite = mstack.end();
	std::cout << "Last: " << *std::prev(ite) << std::endl;
	++it;
	--it;
	std::cout << "Printing all elements: " << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "---------------------" << *ite << std::endl;
	std::cout << "Copy constructor." << std::endl;
	MutantStack<int> s5(mstack);
	std::cout << "Top value: " << s5.top() << std::endl;

	std::cout << "---------------------" << *ite << std::endl;
	MutantStack<int> s2;
	std::cout << "Assignation operator." << std::endl;
	s2.push(11);
	s2 = mstack;
	std::cout << "Top after assignetion: " << s2.top() << std::endl;
	
	std::cout << "---------------------" << *ite << std::endl;
	MutantStack<std::string> s3;
	std::cout << "Size : " << s3.size() << std::endl;

	std::cout << "---------------------" << *ite << std::endl;
	std::cout << "Different container vector." << std::endl;
	MutantStack<float, std::vector<float> > s4;
	s4.push(11);
	s4.push(22);
	s4.push(33);
	MutantStack<float, std::vector<float> >::iterator vi = s4.begin();
	MutantStack<float, std::vector<float> >::iterator vie = s4.end();
	while (vi != vie) {
		std::cout << *vi << std::endl;
		++vi;
	}
	std::cout << "Top element: " << s4.top() << std::endl;
	s4.pop();
	std::cout << "Top element: " << s4.top() << std::endl;

	return 0;
}