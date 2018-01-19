/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 12:23:01 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/18 13:56:58 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>

int main() {
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "------------------" << std::endl;
	Span sp2 = sp;
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "------------------" << std::endl;
	Span sp3(0);
	try {
		std::cout << sp3.shortestSpan() << std::endl;
	} catch (std::exception &) {
		std::cout << "Not enough elements in span." << std::endl;
	}

	std::cout << "------------------" << std::endl;
	std::vector<int> v1(10000, 5);
	Span sp4(10001);
	sp4.addNumber(10);
	sp4.addRange(v1.begin(), v1.end());
	std::cout << sp4.shortestSpan() << std::endl;
	std::cout << sp4.longestSpan() << std::endl;

	std::cout << "------------------" << std::endl;
	try {
		sp4.addNumber(1);
	} catch (std::exception &) {
		std::cout << "Span is full." << std::endl;
	}

	std::cout << "------------------" << std::endl;
	Span sp5(10);
	sp5.addNumber(3);
	std::vector<int> v2(10, 5);
	try {
		sp5.addRange(v2.begin(), v2.end());
	} catch (std::exception &) {
		std::cout << "Not enough space." << std::endl;
	}

	std::cout << "------------------" << std::endl;
	try {
		std::cout << sp5.shortestSpan() << std::endl;
		std::cout << sp5.longestSpan() << std::endl;
	} catch (std::exception &) {
		std::cout << "Not enough elements in span." << std::endl;
	}


	std::cout << "------------------" << std::endl;
	sp5.addRange(v2.begin(), v2.end() - 1);
	std::cout << sp5.shortestSpan() << std::endl;
	std::cout << sp5.longestSpan() << std::endl;
}