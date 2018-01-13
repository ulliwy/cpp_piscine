/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 12:14:29 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/12 16:22:41 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"
#include <iostream>

Victim::Victim() {
}

Victim::Victim(std::string name) : _name(name) {
	std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;
}

Victim::Victim(Victim const &rfs) {
	*this = rfs;
}

Victim::~Victim() {
	std::cout << "Victim " << this->_name << " just died for no apparent reason !" << std::endl;
}

Victim	&Victim::operator=(Victim const &rfs) {
	this->_name = rfs._name;
	return *this;
}

void	Victim::introduce() const {
	std::cout << "I am " << this->_name << " and I like otters !" << std::endl;
}

void 	Victim::getPolymorphed() const {
	std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
}

std::string	Victim::getName() const {
	return this->_name;
}

std::ostream 	&operator<<(std::ostream &o, Victim const &rfs) {
	o << "I am " << rfs.getName() << " and I like otters !" << std::endl;;
	return o;
}
