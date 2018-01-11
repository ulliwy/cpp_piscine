/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 14:20:08 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/10 20:08:44 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed {
public:
	Fixed();
	Fixed(int const n);
	Fixed(float const n);
	Fixed(Fixed const &rfs);
	~Fixed();

	Fixed 	&operator=(Fixed const &rfs);
	int		getRawBits() const;
	float 	toFloat() const;
	int 	toInt() const;

	Fixed 	operator+(Fixed const &rfs) const;
	Fixed 	operator-(Fixed const &rfs) const;
	Fixed 	operator*(Fixed const &rfs) const;
	Fixed 	operator/(Fixed const &rfs) const;

	bool 	operator>(Fixed const &rfs) const;
	bool 	operator>=(Fixed const &rfs) const;
	bool 	operator<(Fixed const &rfs) const;
	bool 	operator<=(Fixed const &rfs) const;
	bool 	operator==(Fixed const &rfs) const;
	bool 	operator!=(Fixed const &rfs) const;

	Fixed 	&operator++();		//++a
	Fixed 	operator++(int); 	//a++
	Fixed 	&operator--();		//++a
	Fixed 	operator--(int); 	//a++

	static const Fixed 	&max(Fixed const &f1, Fixed const &f2);
	static const Fixed 	&min(Fixed const &f1, Fixed const &f2);
	static Fixed 		&max(Fixed &f1, Fixed &f2);
	static Fixed 		&min(Fixed &f1, Fixed &f2);

private:
	int					_value;
	static int const	_bits = 8;
};

std::ostream 	&operator<<(std::ostream &o, Fixed const &rfs);

#endif