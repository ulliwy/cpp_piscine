/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 18:15:57 by Ulliwy            #+#    #+#             */
/*   Updated: 2018/01/12 20:36:43 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon() {
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : 
		_name(name),
		_APCost(apcost),
		_damage(damage) {
}

AWeapon::AWeapon(AWeapon const &rfs) {
	*this = rfs;
}

AWeapon::~AWeapon() {
}

AWeapon 	&AWeapon::operator=(AWeapon const &rfs) {
	this->_name = rfs._name;
	this->_damage = rfs._damage;
	this->_APCost = rfs._APCost;
	return *this;
}

std::string 	AWeapon::getName() const {
	return this->_name;
}

int 			AWeapon::getAPCost() const {
	return this->_APCost;
}

int 			AWeapon::getDamage() const {
	return this->_damage;
}


