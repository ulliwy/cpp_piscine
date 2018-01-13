/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 18:16:36 by Ulliwy            #+#    #+#             */
/*   Updated: 2018/01/12 19:41:06 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy() {
}

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type) {
}
	
Enemy::Enemy(Enemy const &rfs) {
	*this = rfs;
}
	
Enemy::~Enemy() {
}

Enemy 	&Enemy::operator=(Enemy const &rfs) {
	this->_hp = rfs._hp;
	this->_type = rfs._type;
	return *this;
}

std::string		Enemy::getType() const {
	return this->_type;
}

int 			Enemy::getHP() const {
	return this->_hp;
}

void 			Enemy::takeDamage(int p) {
	this->_hp -= p;
	if (this->_hp < 0)
		this->_hp = 0;
}
