/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 18:17:26 by Ulliwy            #+#    #+#             */
/*   Updated: 2018/01/12 20:51:01 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
}

Character::Character(std::string const & name) : _name(name) {
	this->_ap = 40;
	this->_wpn = NULL;
}

Character::Character(Character const &rfs) {
	*this = rfs;
}

Character::~Character() {

}

Character &Character::operator=(Character const &rfs) {
	this->_ap = rfs._ap;
	this->_name = rfs._name;
	this->_wpn = rfs._wpn;
	return *this;
}

void 	Character::recoverAP() {
	this->_ap += 10;
	if ((this->_ap) > 40)
		this->_ap = 40;
}

void 	Character::equip(AWeapon *wpn) {
	this->_wpn = wpn;
}

void 	Character::attack(Enemy *en) {
	if (!_wpn)
		std::cout << this->_name << "has " << this->_ap << " AP and is unarmed" << std::endl;
	else {
		if (_wpn->getAPCost() <= this->_ap) {
			this->_ap -= _wpn->getAPCost();
			std::cout << this->_name << " attacks " << en->getType()
				<< " with a " << this->_wpn->getName() << std::endl;
			_wpn->attack();
			en->takeDamage(_wpn->getDamage());
			if (en->getHP() == 0) {
				delete en;
			}
		}
		else {
			std::cout << "Not enough AP." << std::endl;
		}
	}
}

std::string		Character::getName() const {
	return this->_name;
}

int			Character::getAP() const {
	return this->_ap;
}

std::string		Character::getWpnName() const {
	return this->_wpn->getName();
}

AWeapon		*Character::getWpn() const {
	return this->_wpn;
}

std::ostream 	&operator<<(std::ostream &o, Character const &rfs) {
	if (rfs.getWpn())
		o << rfs.getName() << " has " << rfs.getAP() << " AP and wields a " <<
			rfs.getWpnName() << std::endl;
	else
		std::cout << rfs.getName() << "has " << rfs.getAP() << " AP and is unarmed" << std::endl;
	return o;
}

