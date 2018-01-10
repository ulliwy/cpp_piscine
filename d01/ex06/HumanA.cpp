/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 18:18:46 by Ulliwy            #+#    #+#             */
/*   Updated: 2018/01/09 19:01:04 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &club) : _name(name), _wpn(club) {
}

HumanA::~HumanA() {
}

void HumanA::attack() const {
	std::cout << this->_name << " attacks with his "
			<< (this->_wpn).type << std::endl;
}