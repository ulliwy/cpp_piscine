/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 11:24:23 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/11 17:07:24 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap() {
	this->_name = "Fragy";
	this->_logo = "FR4G-TP";
}

FragTrap::FragTrap(std::string name) {
	this->_name = name;
	this->_logo = "FR4G-TP";
	std::cout << _logo << " <"
			<< this->_name << ">: Directive one: Protect humanity! Directive two: Be cute!" << std::endl;
}

FragTrap::FragTrap(FragTrap const &rfs) {
	*this = rfs;
	std::cout << _logo << " <"
			<< this->_name << ">: Directive one: Protect humanity! Directive two: Be cute!" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << _logo << " <" << this->_name << ">: My session is over. I'll go play Dota!" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target) {
	std::string	attacks[] = {"snu snu", "fatal", "fireball", "love rays", "Justing Bieber"};
	if (this->_energyPoints >= 25) {
		std::cout << _logo << " <" << this->_name << "> sends " << attacks[rand() % 5] << " to attack "
			<< target << std::endl;
		this->_energyPoints -= 25;
	}
	else {
		std::cout << _logo << " <" << this->_name << "> has no energy to do special attack..." << std::endl;
	}

}
