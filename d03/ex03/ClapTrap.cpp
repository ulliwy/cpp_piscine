/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 11:24:23 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/11 20:38:53 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Clapy"), _logo("CL4P-TP"), _hitPoints(100), _maxHitPoints(100),
	_meleeAttackDamage(20), _rangedAttackDamage(15) {
	std::cout << _logo << " <" << this->_name
			<< ">: Directive one: Man the door! Directive two: Challenge people!" << std::endl;
	_maxEnergyPoints = 50;	
	_level = 1;
	_armorDamageReduction = 3;
	_energyPoints = 50;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _logo("CL4P-TP"), _hitPoints(100), _maxHitPoints(100),
	_energyPoints(50), _meleeAttackDamage(20), _rangedAttackDamage(15) {
	std::cout << _logo << " <"
			<< this->_name << ">: Directive one: Man the door! Directive two: Challenge people!" << std::endl;
	_maxEnergyPoints = 50;	
	_level = 1;
	_armorDamageReduction = 3;
}

ClapTrap::ClapTrap(ClapTrap const &rfs) : _name(rfs.getName()), _logo("CL4P-TP"), _hitPoints(100), _maxHitPoints(100),
	_energyPoints(50), _meleeAttackDamage(20), _rangedAttackDamage(15){
	*this = rfs;
	std::cout << this->_logo << " <"
			<< this->_name << ">: Directive one: Man the door! Directive two: Challenge people!" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << _logo << " <" << this->_name << ">: My session is over. I'll go play Dota!" << std::endl;
}

std::string	ClapTrap::getName() const {
	return this->_name;
}

std::string	ClapTrap::getLogo() const {
	return this->_logo;
}

ClapTrap 	&ClapTrap::operator=(ClapTrap const &rfs) {
	this->_name = rfs._name;
	this->_hitPoints = rfs._hitPoints;
	this->_maxHitPoints = rfs._maxHitPoints;
	this->_energyPoints = rfs._energyPoints;
	this->_maxEnergyPoints = rfs._maxEnergyPoints;
	this->_level = rfs._level;
	this->_meleeAttackDamage = rfs._meleeAttackDamage;
	this->_rangedAttackDamage = rfs._rangedAttackDamage;
	this->_armorDamageReduction = rfs._armorDamageReduction;
	return *this;
}

void	ClapTrap::rangedAttack(std::string const &target) const {
	std::cout << _logo << " <" << this->_name << "> attacks " << target << " at range, causing "
			<< this->_rangedAttackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const &target) const {
	std::cout << _logo << " <" << this->_name << "> melee attacks " << target << ", causing "
			<< this->_meleeAttackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << _logo << " <" << this->_name << "> is damaged for " << amount << " HP."
			<< std::endl;
	this->_hitPoints -= amount;
	if (this->_hitPoints < 0) {
		std::cout << _logo << " <" << this->_name << "> is dead. Don't bother dead... " << std::endl;
		this->_hitPoints = 0;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	std::cout << _logo << " <" << this->_name << "> is repairing and getting " << amount << " HP."
			<< std::endl;
	this->_hitPoints += amount;
	if (this->_hitPoints > this->_maxHitPoints) {
		std::cout << _logo << " <" << this->_name << "> is fully repaired. " << std::endl;
		this->_hitPoints = this->_maxHitPoints;
	}
}
