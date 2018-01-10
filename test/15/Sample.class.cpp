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

Sample::Sample(void) {
	std::cout << "Constructor called" << std::endl;
}

Sample::~Sample(void) {
	std::cout << "Destructor called" << std::endl;
}

void	Sample::bar(char const c) const {
	std::cout << "char" << c << std::endl;
}

void	Sample::bar(int const n) const {
	std::cout << "int" << n << std::endl;
}

void	Sample::bar(float const z) const {
	std::cout << "float" << z << std::endl;
}

void	Sample::bar(Sample const &i) const {
	std::cout << "ref" <<  i.c << std::endl;
}
