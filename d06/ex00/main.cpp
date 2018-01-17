/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 15:22:08 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/16 16:34:25 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <cctype>
#include <exception>

int main(int argc, char **argv)
{
	if (argc != 2) {
		std::cout << "Pass the value to convert." << std::endl;
		return 1;
	}
	std::string str = argv[1];
	std::cout << str;

	std::cout << "char: ";
	try {
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
		int i = static_cast<int>(std::stoi(str));
		std::cout << i << std::endl;
	} catch (std::exception &e) {
		std::cout << "impossible" << std::endl;
	}

	std::cout << "float: ";
	try {
		float f = static_cast<float>(std::stof(str));
		std::cout << f << "f" << std::endl;
	} catch (std::exception &e) {
		std::cout << "impossible" << std::endl;
	}

	std::cout << "double: ";
	try {
		double d = static_cast<double>(std::stod(str));
		std::cout << d << std::endl;
	} catch (std::exception &e) {
		std::cout << "impossible" << std::endl;
	}
}
