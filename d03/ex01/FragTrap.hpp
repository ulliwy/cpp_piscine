/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 11:24:23 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/11 16:14:13 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include <string>

class FragTrap {
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const &rfs);
	~FragTrap();

	FragTrap 	&operator=(FragTrap const &rfs);
	std::string	getName() const;

	void		rangedAttack(std::string const &target) const;
	void		meleeAttack(std::string const &target) const;
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);

	void		vaulthunter_dot_exe(std::string const & target);

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
