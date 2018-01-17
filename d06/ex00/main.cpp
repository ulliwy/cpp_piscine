/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 15:22:08 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/16 19:33:56 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <cctype>
#include <exception>
#include <iomanip>
#include <limits>

int main(int argc, char **argv)
{
	if (argc != 2) {
		std::cout << "Pass the value to convert." << std::endl;
		return 1;
	}
	std::string str = argv[1];

	std::cout << "char: ";
	try {
		if (std::stoi(str) < std::numeric_limits<char>::min())
			throw std::exception();
		else if (std::stoi(str) > std::numeric_limits<char>::max())
			throw std::exception();
		char c = static_cast<char>(std::stoi(str));
		if (isprint(c))
			std::cout << "'" << c << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	} catch (std::exception &e) {
		std::cout << "impossible" << std::endl;
	}
	
	std::cout << "int: ";
	try {
		if ((std::stol(str) < std::numeric_limits<int>::min()))
			throw std::exception();
		if ((std::stol(str) > std::numeric_limits<int>::max()))
			throw std::exception();
		int i = static_cast<int>(std::stoi(str));
		std::cout << i << std::endl;
	} catch (std::exception &e) {
		std::cout << "impossible" << std::endl;
	}

	std::cout << "float: ";
	try {
		if ((std::stod(str) < std::numeric_limits<float>::min()))
			throw std::exception();
		if ((std::stod(str) > std::numeric_limits<float>::max()))
			throw std::exception();
		float f = static_cast<float>(std::stof(str));
		std::cout << std::setprecision(1) << std::fixed << f << "f" << std::endl;
	} catch (std::exception &e) {
		std::cout << "impossible" << std::endl;
	}

	std::cout << "double: ";
	try {
		if ((std::stold(str) < std::numeric_limits<double>::min()))
			throw std::exception();
		if ((std::stold(str) > std::numeric_limits<double>::max()))
			throw std::exception();
		double d = static_cast<double>(std::stod(str));
		std::cout << d << std::endl;
	} catch (std::exception &e) {
		std::cout << "impossible" << std::endl;
	}
}
