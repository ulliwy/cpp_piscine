/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 13:09:44 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/09 14:51:02 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie() : name("Carl"), type("regular") {
	std::cout << this->type << " zombie created." << std::endl;
}

Zombie::~Zombie() {
	std::cout << this->type << " zombie destroyed." << std::endl;
}

void	Zombie::announce() const {
	std::cout << "<" << this->name << " (" << this->type <<
			")> Braiiiiiiinnnssss..." << std::endl;
}
