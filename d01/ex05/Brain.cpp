/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 15:01:58 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/09 15:43:05 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
#include <sstream>
#include <cctype>

Brain::Brain() {
}

Brain::~Brain() {
}

std::string		Brain::identify() const {
	std::stringstream 	id;
	std::string 		str;
	id << this;
	str = id.str();
	for (int i = 0; i < (int)str.length(); i++)
		str[i] = std::toupper(str[i]);
	return (str);
}