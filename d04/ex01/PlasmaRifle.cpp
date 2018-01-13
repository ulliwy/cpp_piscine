/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 18:16:15 by Ulliwy            #+#    #+#             */
/*   Updated: 2018/01/12 20:36:34 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &rfs) : AWeapon(rfs) {
	*this = rfs;
}

PlasmaRifle::~PlasmaRifle() {
}

PlasmaRifle 	&PlasmaRifle::operator=(PlasmaRifle const &rfs) {
	this->_name = rfs._name;
	this->_damage = rfs._damage;
	this->_APCost = rfs._APCost;
	return *this;
}

void 	PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
