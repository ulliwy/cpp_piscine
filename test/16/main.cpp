/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 11:16:44 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/10 12:37:44 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Integer.class.hpp"

int main() {
	Integer x(10);
	Integer y(20);
	Integer z(30);

	std::cout << "x: " << x << std::endl;
	std::cout << "y: " << y << std::endl;
	y = Integer(12);
	std::cout << "y: " << y << std::endl;
	std::cout << "z: " << z << std::endl;
	z = x + y;
	std::cout << "z: " << z << std::endl;
}