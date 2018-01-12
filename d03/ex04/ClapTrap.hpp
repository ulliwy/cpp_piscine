/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 16:33:24 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/11 21:49:36 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>

class ClapTrap {
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &rfs);
	~ClapTrap();

	ClapTrap 	&operator=(ClapTrap const &rfs);
	virtual std::string	getName() const;
	virtual std::string	getLogo() const;

	void		rangedAttack(std::string const &target) const;
	void		meleeAttack(std::string const &target) const;
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);

protected:
	std::string	_name;
	std::string	_logo;
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