/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 20:56:41 by Ulliwy            #+#    #+#             */
/*   Updated: 2018/01/12 23:06:29 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_H
#define SQUAD_H

#include "ISquad.hpp"

class Squad : public ISquad {
private:
	typedef struct 	s_list {
		ISpaceMarine	*m;
		s_list			*next;
	}				t_list;

	int		_units;
	t_list	*_marines;

public:
	Squad();
	Squad(Squad const &rfs);
	virtual ~Squad();

	Squad &operator=(Squad const &frs);

	virtual int getCount() const;
	virtual ISpaceMarine* getUnit(int) const;
	virtual int push(ISpaceMarine*);
};

#endif