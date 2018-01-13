/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 12:14:29 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/12 16:26:37 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_H
#define PEON_H

#include "Victim.hpp"
#include <iostream>

class Peon : public Victim {
public:
	Peon();
	Peon(std::string name);
	Peon(Peon const &rfs);
	~Peon();

	Peon &operator=(Peon const &frs);

	virtual void	getPolymorphed() const;
};

#endif