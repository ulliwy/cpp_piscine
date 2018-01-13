/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 18:15:59 by Ulliwy            #+#    #+#             */
/*   Updated: 2018/01/12 18:47:10 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_H
#define AWEAPON_H

#include <iostream>

class AWeapon {
protected:
	std::string	_name;
	int			_damage;
	int			_APCost;

	AWeapon();

public:
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(AWeapon const &rfs);
	virtual ~AWeapon();

	AWeapon 	&operator=(AWeapon const &rfs);

	std::string 	getName() const;
	int 			getAPCost() const;
	int 			getDamage() const;
	virtual void 	attack() const = 0;
};

#endif
