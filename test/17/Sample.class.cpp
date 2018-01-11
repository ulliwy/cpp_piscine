/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 11:50:17 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/08 11:51:26 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void) : _foo(0) {
	std::cout << "Default Constructor called" << std::endl;
}

Sample::Sample(int const n) : _foo(n) {
	std::cout << "Param Constructor called" << std::endl;
}

Sample::Sample(Sample const &src) {
	std::cout << "Copy Constructor called" << std::endl;
	*this = src;
}

Sample::~Sample(void) {
	std::cout << "Destructor called" << std::endl;
}

int		Sample::getFoo(void) const {
	return this->_foo;
}

Sample 	&Sample::operator=(Sample const &src) {
	std::cout << "Assigment op" << std::endl;
	if (this != &src)
		this ->_foo = src.getFoo();
	return *this;
}

std::ostream	&operator<<(std::ostream &o, Sample const &rfs) {
	o << rfs.getFoo();
	return o;
}
