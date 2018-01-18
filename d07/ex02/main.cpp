/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 14:36:51 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/17 16:10:03 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <exception>

int main() {
	Array<int> a;

	std::cout << "--------" << std::endl;
	std::cout << "Creating empty <int> array a. Trying to get a[0]:" << std::endl;
	try {
		std::cout << a[0] << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << ": Out of limits." << std::endl;
	}

	std::cout << "--------" << std::endl;
	std::cout << "Creating <std::string> array b of size 20. Printing b[0], b[1]." << std::endl;
	Array<std::string> b(10);
	b[0] = "Hello ";
	b[1] = "world!";
	std::cout << b[0] << b[1] << std::endl;

	std::cout << "--------" << std::endl;
	std::cout << "Copy array b to c. Printing c[0], c[1]." << std::endl;
	Array<std::string> c(b);
	std::cout << c[0] << c[1] << std::endl;

	std::cout << "--------" << std::endl;
	std::cout << "Assign c to empty array d." << std::endl;
	Array<std::string> d;
	d = c;
	std::cout << d[0] << d[1] << std::endl;

	std::cout << "--------" << std::endl;
	std::cout << "Printing size d. Taking d[100]." << std::endl;
	std::cout << "Size d: " << d.size() << std::endl;
	try {
		std::cout << d[100] << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << ": Out of limits." << std::endl;
	}
}