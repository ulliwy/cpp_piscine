/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 21:31:37 by Ulliwy            #+#    #+#             */
/*   Updated: 2018/01/16 22:00:16 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <exception>

Base *generate(void) {
	int i = rand() % 3;

	if (i == 0) {
		return (new A);
	} else if (i == 1) {
		return (new B);
	} else {
		return (new C);
	}
}

void identify_from_pointer(Base *p) {
	if (A *a = dynamic_cast<A*>(p)) {
		std::cout << "A" << std::endl;
	} else if (B *b = dynamic_cast<B*>(p)) {
		std::cout << "B" << std::endl;
	} else if (C *c = dynamic_cast<C*>(p)) {
		std::cout << "C" << std::endl;
	}
}

void identify_from_reference(Base &p) {
	try {
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A" << std::endl;
	} catch (std::exception &) {}

	try {
		B &b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B" << std::endl;
	} catch (std::exception &) {}

	try {
		C &c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C" << std::endl;
	} catch (std::exception &) {}
}

int main() {
	Base *ptr;
	srand(std::time(0));
	ptr = generate();
	identify_from_pointer(ptr);
	identify_from_reference(*ptr);
}