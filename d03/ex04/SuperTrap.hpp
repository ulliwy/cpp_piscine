/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 20:58:35 by Ulliwy            #+#    #+#             */
/*   Updated: 2018/01/11 22:16:00 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_H
#define SUPERTRAP_H

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {
public:
	SuperTrap();
	SuperTrap(std::string name);
	SuperTrap(SuperTrap const &rfs);
	~SuperTrap();

	void	rangedAttack(std::string const &target) const;
	void	meleeAttack(std::string const &target) const;
};

#endif