/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 12:14:29 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/12 18:35:46 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_H
#define SORCERER_H

#include <iostream>
#include "Victim.hpp"

class Sorcerer {
public:
	Sorcerer(std::string name, std::string title);
	Sorcerer(Sorcerer const &rfs);
	~Sorcerer();

	Sorcerer	&operator=(Sorcerer const &rfs);

	void		introduce() const;
	void 		polymorph(Victim const &) const;

	std::string	getName() const;
	std::string getTitle() const;

private:
	std::string	_name;
	std::string	_title;

	Sorcerer();
};

std::ostream 	&operator<<(std::ostream &o, Sorcerer const &rfs);

#endif
