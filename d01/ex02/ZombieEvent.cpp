/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 13:10:04 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/09 14:56:58 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "ZombieEvent.hpp"

std::string		random_name() {
	std::string	names[] = {"Elza", "Ariel", "Jasmine", "Snow White", "Olaf"};

	return (names[rand() % 5]);
}

ZombieEvent::ZombieEvent() : _type("none") {
}

ZombieEvent::~ZombieEvent() {
}

void	ZombieEvent::setZombieType(std::string type) {
	this->_type = type;
}

Zombie *ZombieEvent::newZombie(std::string name) const {
	Zombie *zom = new Zombie();
	zom->name = name;
	zom->type = this->_type;
	return (zom);
}

Zombie	*ZombieEvent::randomChump() const {
	Zombie *zom = new Zombie();
	zom->name = random_name();
	zom->type = this->_type;
	zom->announce();
	return (zom);
}