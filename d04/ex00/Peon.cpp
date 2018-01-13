/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 12:14:29 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/12 16:24:45 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name) {
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const &rfs) {
	*this = rfs;
	std::cout << "Zog zog." << std::endl;
}
Peon::~Peon() {
	std::cout << "Bleuark..." << std::endl;
}

Peon &Peon::operator=(Peon const &rfs) {
	this->_name = rfs._name;
	return *this;
}

void	Peon::getPolymorphed() const {
	std::cout << this->_name << " has been turned into a pink pony !" << std::endl;
}
