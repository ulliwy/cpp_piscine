/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 11:24:23 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/11 20:11:42 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	this->_name = "Scavy";
	this->_logo = "SC4V-TP";
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_level = 1;
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
	std::cout << _logo << " <" << this->_name 
		<< ">: Directive one: Protect humanity! Directive two: Be cute!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
	this->_name = name;
	this->_logo = "SC4V-TP";
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_level = 1;
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
	std::cout << _logo << " <"
			<< this->_name << ">: Directive one: Protect humanity! Directive two: Be cute!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &rfs) {
	*this = rfs;
	std::cout << "SC4V-TP <"
			<< this->_name << ">: Directive one: Man the door! Directive two: Challenge people!" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << _logo << " <" << this->_name << ">: My session is over. I'll go play Dota!" << std::endl;
}

void	ScavTrap::challengeNewcomer(std::string const & target) const {
	std::string	challs[] = {"Tough Mudder", "Loosers Fight", "Tea Ceremony", "DOTAAAA", "WTF"};
	std::cout << "SC4V-TP <" << this->_name << "> challenges " << target << " in " <<
		challs[rand() % 5] << std::endl;
}
