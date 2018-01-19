/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 11:44:02 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/18 12:22:19 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main() {
	std::vector<int> v1;
	v1.push_back(1);
	v1.push_back(11);
	v1.push_back(125);
	
	std::cout << *(easyfind(v1, 11)) << std::endl;
	std::cout << *(easyfind(v1, 125)) << std::endl;
	
	try {
		std::cout << *(easyfind(v1, -1)) << std::endl;
	} catch (std::exception &) {
		std::cout << "No such element." << std::endl;
	}
	
	*(easyfind(v1, 1)) = 21;
	try {
		std::cout << *(easyfind(v1, 1)) << std::endl;
	} catch (std::exception &) {
		std::cout << "No such element." << std::endl;
	}
	std::cout << *(easyfind(v1, 21)) << std::endl;

	std::cout << "------" << std::endl;
	std::list<float> v2;
	v2.push_back(0);
	v2.push_back(33);
	std::cout << *(easyfind(v2, 0)) << std::endl;
}