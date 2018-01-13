/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 12:14:29 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/12 18:36:51 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_H
#define PEON_H

#include "Victim.hpp"
#include <iostream>

class Peon : public Victim {
public:
	Peon(std::string name);
	Peon(Peon const &rfs);
	virtual ~Peon();

	Peon &operator=(Peon const &frs);

	virtual void	getPolymorphed() const;

private:
	Peon();
};

#endif