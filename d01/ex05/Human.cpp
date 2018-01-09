/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 15:02:06 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/09 15:44:07 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human() {
}

Human::~Human() {
}

void	Human::identify() const {
	(this->brn).identify();
}

Brain const	&Human::getBrain() const {
	return (this->brn);
}
