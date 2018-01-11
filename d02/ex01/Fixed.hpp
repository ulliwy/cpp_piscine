/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 14:20:08 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/10 16:23:56 by iprokofy         ###   ########.fr       */
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

private:
	int					_value;
	static int const	_bits = 8;
};

std::ostream 	&operator<<(std::ostream &o, Fixed const &rfs);

#endif