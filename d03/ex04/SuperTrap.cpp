/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 20:58:35 by Ulliwy            #+#    #+#             */
/*   Updated: 2018/01/11 22:30:04 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"
#include <iostream>

SuperTrap::SuperTrap() {
	this->_name = "Suppy";
	this->_logo = "S4PR-TP";
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
	std::cout << _logo << " <" << this->_name 
		<< ">: Super super super!" << std::endl;
}

SuperTrap::SuperTrap(std::string name) {
	this->_name = name;
	this->_logo = "S4PR-TP";
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
	std::cout << _logo << " <" << this->_name 
		<< ">: Super super super!" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &rfs) {
	*this = rfs;
	std::cout << "S4PR-TP <"
			<< this->_name << ">: Super super super!" << std::endl;
}

SuperTrap::~SuperTrap() {
	std::cout << _logo << " <" << this->_name << ">: My session is over. I'll go play Dota!" << std::endl;
}

void	SuperTrap::meleeAttack(std::string const &target) const {
	NinjaTrap::meleeAttack(target);
}

void	SuperTrap::rangedAttack(std::string const & target) const {

	FragTrap::rangedAttack(target);
}


