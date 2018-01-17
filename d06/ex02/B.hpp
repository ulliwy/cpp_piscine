/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 21:25:32 by Ulliwy            #+#    #+#             */
/*   Updated: 2018/01/16 21:40:00 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_H
#define B_H

#include "Base.hpp"

class B : public Base {
public:
	B();
	B(B const &rfs);
	virtual ~B();

	B &operator=(B const &rfs);
};

#endif
