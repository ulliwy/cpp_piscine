/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 18:17:28 by Ulliwy            #+#    #+#             */
/*   Updated: 2018/01/12 20:28:06 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character {
private:
	std::string	_name;
	int			_ap;
	AWeapon		*_wpn;

	Character();

public:
	Character(std::string const & name);
	Character(Character const &rfs);
	~Character();

	Character &operator=(Character const &frs);

	void 			recoverAP();
	void 			equip(AWeapon*);
	void 			attack(Enemy*);
	std::string		getName() const;
	int				getAP() const;
	std::string		getWpnName() const;
	AWeapon			*getWpn() const;
};

std::ostream 	&operator<<(std::ostream &o, Character const &rfs);

#endif