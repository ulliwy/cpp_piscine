/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 21:19:56 by Ulliwy            #+#    #+#             */
/*   Updated: 2018/01/16 21:39:50 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_H
#define A_H

#include "Base.hpp"

class A : public Base {
public:
	A();
	A(A const &rfs);
	virtual ~A();

	A &operator=(A const &rfs);
};

#endif