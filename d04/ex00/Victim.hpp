/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 12:14:29 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/12 18:36:20 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_H
#define VICTIM_H

#include <iostream>

class Victim {
public:
	
	Victim(std::string name);
	Victim(Victim const &rfs);
	virtual ~Victim();

	Victim	&operator=(Victim const &rfs);

	void		introduce() const;
	virtual void 		getPolymorphed() const;

	std::string	getName() const;
	
protected:
	Victim();
	std::string	_name;
};

std::ostream 	&operator<<(std::ostream &o, Victim const &rfs);

#endif