/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 18:18:34 by Ulliwy            #+#    #+#             */
/*   Updated: 2018/01/09 18:54:17 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon(std::string tp) : type(tp) {
}

Weapon::~Weapon() {
}

const 	std::string &Weapon::getType() const {
	return (this->type);
}

void	Weapon::setType(std::string tp) {
	this->type = tp;
}