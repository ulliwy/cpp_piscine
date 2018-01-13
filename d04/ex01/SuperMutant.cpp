/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 18:16:54 by Ulliwy            #+#    #+#             */
/*   Updated: 2018/01/12 19:46:25 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant") {
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}
	
SuperMutant::SuperMutant(SuperMutant const &rfs) : Enemy(rfs) {
	*this = rfs;
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}
	
SuperMutant::~SuperMutant() {
	std::cout << "Aaargh ..." << std::endl;
}

SuperMutant 	&SuperMutant::operator=(SuperMutant const &rfs) {
	this->_hp = rfs._hp;
	this->_type = rfs._type;
	return *this;
}

void 			SuperMutant::takeDamage(int p) {
	p = p - 3;
	this->_hp -= p;
	if (this->_hp < 0)
		this->_hp = 0;
}