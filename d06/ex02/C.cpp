/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 21:25:37 by Ulliwy            #+#    #+#             */
/*   Updated: 2018/01/16 21:28:54 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"

C::C() {
}

C::C(C const &rfs) {
	(void)rfs;
}

C::~C() {
}

C &C::operator=(C const &rfs) {
	(void)rfs;
	return *this;
}
