/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 12:14:29 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/12 18:36:02 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include <iostream>

Sorcerer::Sorcerer() {
}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title) {
	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &rfs) {
	*this = rfs;
}

Sorcerer::~Sorcerer() {
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same !" << std::endl;
}

Sorcerer	&Sorcerer::operator=(Sorcerer const &rfs) {
	this->_name = rfs._name;
	this->_title = rfs._title;
	return *this;
}

void	Sorcerer::introduce() const {
	std::cout << "I am " << this->_name << ", " << this->_title << ", and I like ponies !" << std::endl;
}

void 	Sorcerer::polymorph(Victim const &rfs) const {
	rfs.getPolymorphed();
}

std::string	Sorcerer::getName() const {
	return this->_name;
}

std::string Sorcerer::getTitle() const {
	return this->_title;
}

std::ostream 	&operator<<(std::ostream &o, Sorcerer const &rfs) {
	o << "I am " << rfs.getName() << ", " << rfs.getTitle() << ", and I like ponies !" <<std::endl;
	return o;
}
