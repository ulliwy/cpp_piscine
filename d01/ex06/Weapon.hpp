/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 18:18:36 by Ulliwy            #+#    #+#             */
/*   Updated: 2018/01/09 18:53:25 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class Weapon {
public:
	Weapon(std::string tp);
	~Weapon();

	const std::string 	&getType() const;
	void				setType(std::string tp);

	std::string 		type;
};

#endif