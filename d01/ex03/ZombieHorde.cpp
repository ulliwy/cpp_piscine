/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 14:27:05 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/09 14:47:32 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <cstdlib>

ZombieHorde::ZombieHorde(int n) : _number(n) {
	std::string	names[] = {"Elza", "Ariel", "Jasmine", "Snow White", "Olaf"};
	this->_horde = new Zombie[n];

	for (int i = 0; i < n; i++) {
		(this->_horde)[i].name = names[rand() % 5];
	}
}

ZombieHorde::~ZombieHorde() {
	delete [] this->_horde;
}

void	ZombieHorde::announce() const {
	for (int i = 0; i < this->_number; i++) {
		(this->_horde)[i].announce();
	}
}
