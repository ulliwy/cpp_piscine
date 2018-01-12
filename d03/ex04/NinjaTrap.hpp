/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 20:14:55 by Ulliwy            #+#    #+#             */
/*   Updated: 2018/01/11 22:30:07 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_H
#define NINJATRAP_H

#include <string>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public virtual ClapTrap {
public:
	NinjaTrap();
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap const &rfs);
	~NinjaTrap();

	void		ninjaShoebox(FragTrap &rfs) const;
	void		ninjaShoebox(NinjaTrap &rfs) const;
	void		ninjaShoebox(ScavTrap &frs) const;
	void		ninjaShoebox(ClapTrap &frs) const;
};

#endif