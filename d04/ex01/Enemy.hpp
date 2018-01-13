/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 18:16:39 by Ulliwy            #+#    #+#             */
/*   Updated: 2018/01/12 20:45:39 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_H
#define ENEMY_H

#include <iostream>

class Enemy {
protected:
	int			_hp;
	std::string	_type;
	
	Enemy();

public:
	Enemy(int hp, std::string const & type);
	Enemy(Enemy const &rfs);
	virtual ~Enemy();

	Enemy 	&operator=(Enemy const &frs);

	std::string		getType() const;
	int 			getHP() const;
	virtual void 	takeDamage(int);
};

#endif