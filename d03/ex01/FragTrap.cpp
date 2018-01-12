/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 11:24:23 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/11 16:18:25 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap() : _name("Lovely"), _hitPoints(100), _maxHitPoints(100),
	_energyPoints(100), _meleeAttackDamage(30), _rangedAttackDamage(20) {
	std::cout << "FR4G-TP <" << this->_name
			<< ">: Directive one: Protect humanity! Directive two: Be cute!" << std::endl;
	_maxEnergyPoints = 100;	
	_level = 1;
	_armorDamageReduction = 5;
}

FragTrap::FragTrap(std::string name) : _name(name), _hitPoints(100), _maxHitPoints(100),
	_energyPoints(100), _maxEnergyPoints(100), _level(1), _meleeAttackDamage(30),
	_rangedAttackDamage(20), _armorDamageReduction(5) {
	std::cout << "FR4G-TP <"
			<< this->_name << ">: Directive one: Protect humanity! Directive two: Be cute!" << std::endl;
}

FragTrap::FragTrap(FragTrap const &rfs) {
	*this = rfs;
	std::cout << "FR4G-TP <"
			<< this->_name << ">: Directive one: Protect humanity! Directive two: Be cute!" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FR4G-TP <" << this->_name << ">: My session is over. I'll go play Dota!" << std::endl;
}

std::string	FragTrap::getName() const {
	return this->_name;
}

FragTrap 	&FragTrap::operator=(FragTrap const &rfs) {
	this->_name = rfs.getName();
	return *this;
}

void	FragTrap::rangedAttack(std::string const &target) const {
	std::cout << "FR4G-TP <" << this->_name << "> attacks " << target << " at range, causing "
			<< this->_rangedAttackDamage << " points of damage!" << std::endl;
}

void	FragTrap::meleeAttack(std::string const &target) const {
	std::cout << "FR4G-TP <" << this->_name << "> melee attacks " << target << ", causing "
			<< this->_meleeAttackDamage << " points of damage!" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount) {
	std::cout << "FR4G-TP <" << this->_name << "> is damaged for " << amount << " HP."
			<< std::endl;
	this->_hitPoints -= amount;
	if (this->_hitPoints < 0) {
		std::cout << "FR4G-TP <" << this->_name << "> is dead. Don't bother dead... " << std::endl;
		this->_hitPoints = 0;
	}
}

void	FragTrap::beRepaired(unsigned int amount) {
	std::cout << "FR4G-TP <" << this->_name << "> is repairing and getting " << amount << " HP."
			<< std::endl;
	this->_hitPoints += amount;
	if (this->_hitPoints > this->_maxHitPoints) {
		std::cout << "FR4G-TP <" << this->_name << "> is fully repaired. " << std::endl;
		this->_hitPoints = this->_maxHitPoints;
	}
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target) {
	std::string	attacks[] = {"snu snu", "fatal", "fireball", "love rays", "Justing Bieber"};
	if (this->_energyPoints >= 25) {
		std::cout << "FR4G-TP <" << this->_name << "> sends " << attacks[rand() % 5] << " to attack "
			<< target << std::endl;
		this->_energyPoints -= 25;
	}
	else {
		std::cout << "FR4G-TP <" << this->_name << "> has no energy to do special attack..." << std::endl;
	}

}
