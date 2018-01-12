/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 16:03:29 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/11 16:29:15 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include <string>

class ScavTrap {
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &rfs);
	~ScavTrap();

	ScavTrap 	&operator=(ScavTrap const &rfs);
	std::string	getName() const;

	void		rangedAttack(std::string const &target) const;
	void		meleeAttack(std::string const &target) const;
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);

	void		challengeNewcomer(std::string const &target) const;

private:
	std::string	_name;
	int			_hitPoints;
	int			_maxHitPoints;
	int			_energyPoints;
	int			_maxEnergyPoints;
	int			_level;
	int			_meleeAttackDamage;
	int			_rangedAttackDamage;
	int			_armorDamageReduction;
};

#endif
