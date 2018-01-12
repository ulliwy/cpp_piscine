/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 20:14:55 by Ulliwy            #+#    #+#             */
/*   Updated: 2018/01/11 22:09:21 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() {
	this->_name = "Ninjy";
	this->_logo = "NING4-TP";
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;
	std::cout << _logo << " <" << this->_name 
		<< ">: Ninja is here!" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name) {
	this->_name = name;
	this->_logo = "NING4-TP";
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;
	std::cout << _logo << " <"
			<< this->_name << ">: Ninja is here!" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &rfs) {
	*this = rfs;
	std::cout << "NING4-TP <"
			<< this->_name << ">: Ninja is here!" << std::endl;
}

NinjaTrap::~NinjaTrap() {
	std::cout << this->_logo << " <" << this->_name << ">: My session is over. I'll go play Dota!" << std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap &rfs) const {
	std::cout << this->_logo << " <" << this->_name << "> dances with " << rfs.getLogo() <<
		" <" << rfs.getName() << ">." << std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap &rfs) const {
	std::cout << this->_logo << " <" << this->_name << "> plays with " << rfs.getLogo() <<
		" <" << rfs.getName() << ">." << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap &rfs) const {
	std::cout << _logo << " <" << this->_name << "> meets brother " << rfs.getLogo() <<
		" <" << rfs.getName() << ">." << std::endl;
}

void	NinjaTrap::ninjaShoebox(ClapTrap &rfs) const {
	std::cout << _logo << " <" << this->_name << "> meets father " << rfs.getLogo() <<
		" <" << rfs.getName() << ">." << std::endl;
}




