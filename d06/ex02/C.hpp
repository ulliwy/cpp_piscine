/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 21:25:40 by Ulliwy            #+#    #+#             */
/*   Updated: 2018/01/16 21:40:07 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_H
#define C_H

#include "Base.hpp"

class C : public Base {
public:
	C();
	C(C const &rfs);
	virtual ~C();

	C &operator=(C const &rfs);
};

#endif
