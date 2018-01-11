/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 11:50:17 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/08 11:51:26 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Integer.class.hpp"

Integer::Integer(int const n) : _n(n) {
	std::cout << "Constructor called" << std::endl;
}

Integer::~Integer(void) {
	std::cout << "Destructor called" << std::endl;
}

int 	Integer::getValue() const {
	return this->_n;
}

Integer 	&Integer::operator=(Integer const &rfs) {
	std::cout << "assign " << this->_n << " to " << rfs.getValue() << std::endl;
	this->_n = rfs.getValue();
	return *this;
}

Integer 	Integer::operator+(Integer const &rfs) const {
	std::cout << "add " << this->_n << " to " << rfs.getValue() << std::endl;
	return (Integer(this->_n + rfs.getValue()));
}

std::ostream	&operator<<(std::ostream &o, Integer const &rfs) {
	o << rfs.getValue();
	return o;
}