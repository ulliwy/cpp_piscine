/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 15:06:19 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/10 20:07:39 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

#include <iostream>
int main( void ) {
	// Fixed a(0);
	// Fixed b(-1);

	// std::cout << a + b << std::endl;
	// std::cout << a - b << std::endl;
	// std::cout << a * b << std::endl;
	// std::cout << a / b << std::endl;
	
	// std::cout << "-------" << std::endl;
	// std::cout << (a > b) << std::endl;
	// std::cout << (a >= b) << std::endl;
	// std::cout << (a < b) << std::endl;
	// std::cout << (a <= b) << std::endl;
	// std::cout << (a == b) << std::endl;
	// std::cout << (a != b) << std::endl;
	
	// std::cout << "-------" << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << b-- << std::endl;
	// std::cout << b << std::endl;
	// std::cout << --b << std::endl;
	// std::cout << b << std::endl;

	// std::cout << "-------" << std::endl;
	// std::cout << min(a, b) << std::endl;
	// std::cout << max(a, b) << std::endl;

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;

}