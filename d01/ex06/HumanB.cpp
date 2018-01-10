/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 18:19:02 by Ulliwy            #+#    #+#             */
/*   Updated: 2018/01/09 19:22:45 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : _name(name) {
}

HumanB::~HumanB() {
}

void 	HumanB::attack() const {
	std::cout << this->_name << " attacks with his "
			<< (this->_wpn)->type << std::endl;
}

void	HumanB::setWeapon(Weapon &wpn) {
	this->_wpn = &wpn;
}