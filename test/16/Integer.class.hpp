/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 11:50:17 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/08 11:51:26 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTEGER_CLASS_H
# define INTEGER_CLASS_H

#include <iostream>

class Integer {
public:
	Integer(int const n);
	~Integer(void);

	Integer 	&operator=(Integer const &rfs);
	Integer 	operator+(Integer const &rfs) const;

	int 	getValue(void) const;

private:
	int 	_n;
};

std::ostream 	&operator<<(std::ostream &o, Integer const &rfs);

#endif