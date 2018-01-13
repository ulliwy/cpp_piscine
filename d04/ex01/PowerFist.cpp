/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 18:16:30 by Ulliwy            #+#    #+#             */
/*   Updated: 2018/01/12 20:43:03 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {
}

PowerFist::PowerFist(PowerFist const &rfs) : AWeapon(rfs) {
	*this = rfs;
}

PowerFist::~PowerFist() {
}

PowerFist 	&PowerFist::operator=(PowerFist const &rfs) {
	this->_name = rfs._name;
	this->_damage = rfs._damage;
	this->_APCost = rfs._APCost;
	return *this;
}

void 	PowerFist::attack() const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
}