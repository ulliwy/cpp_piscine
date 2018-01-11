/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 14:20:08 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/10 16:48:53 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : _value(0) {
}

Fixed::Fixed(int const n) {
	this->_value = n << this->_bits;
}

Fixed::Fixed(float const n) {
	this->_value = roundf(n * (1 << this->_bits));
}

Fixed::Fixed(Fixed const &src) {
	*this = src;
}

Fixed::~Fixed() {
}

Fixed 	&Fixed::operator=(Fixed const &rfs) {
	if (this != &rfs)
		this ->_value = rfs.getRawBits();
	return *this;
}

Fixed 	Fixed::operator+(Fixed const &rfs) const {
	Fixed res;
	res._value = this->_value + rfs.getRawBits();
	return res;
}

Fixed 	Fixed::operator-(Fixed const &rfs) const {
	Fixed res;
	res._value = this->_value - rfs.getRawBits();
	return res;
}

Fixed 	Fixed::operator*(Fixed const &rfs) const {
	Fixed res;
	res._value = (this->_value * rfs.getRawBits()) >> this->_bits;
	return res;
}

Fixed 	Fixed::operator/(Fixed const &rfs) const {
	Fixed res;
	res._value = (this->_value << this->_bits) / rfs.getRawBits();
	return res;
}

int		Fixed::getRawBits() const {
	return this->_value;
}

float 	Fixed::toFloat() const {
	float ret = this->_value;
	return (ret / (1 << this->_bits));
}

int 	Fixed::toInt() const {
	return (this->_value >> this->_bits);
}

std::ostream 	&operator<<(std::ostream &o, Fixed const &rfs) {
	o << rfs.toFloat();
	return o;
}


