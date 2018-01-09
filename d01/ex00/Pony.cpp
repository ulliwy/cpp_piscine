/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 12:35:18 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/09 13:03:52 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

Pony::Pony(std::string name, std::string color) : _name(name), _color(color) {
	std::cout << "New pony arrived!" << std:: endl;
}

Pony::~Pony() {
	std::cout << "Pony " << this->_name << " just left." << std:: endl;
}

void	Pony::sayName() const {
	std::cout << "Pony said: \"My name is " << this->_name << "!\"" << std::endl;
}
