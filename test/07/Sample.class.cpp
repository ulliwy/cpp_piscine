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

	this->publicfoo = 0;
	std::cout << "this->publicfoo: " << this->publicfoo << std::endl;

	this->_privatefoo = 0;
	std::cout << "this->_privatefoo: " << this->_privatefoo << std::endl;

	this->publicbar();
	this->_privatebar();

	return ;
}

Sample::~Sample(void) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	Sample::publicbar(void) const {
	std::cout << "publicbar function" << std::endl;
	return ;
}

void	Sample::_privatebar(void) const {
	std::cout << "_privatebar function" << std::endl;
	return ;
}