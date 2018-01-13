/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 20:56:41 by Ulliwy            #+#    #+#             */
/*   Updated: 2018/01/12 23:59:35 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include <iostream>

Squad::Squad() : _units(0), _marines(NULL) {
}

Squad::Squad(Squad const &rfs) {
	this->_units = rfs._units;

	t_list **dst = &this->_marines;
	t_list *tmp = rfs._marines;

	while (tmp) {
		*dst = new t_list;
		(*dst)->m = tmp->m->clone();
		dst = &(*dst)->next;
		tmp = tmp->next;
	}

	*dst = NULL;
}
	
Squad::~Squad() {
	t_list	*tmp;

	while (this->_marines)
	{
		tmp = _marines->next;
		if (_marines->m)
			delete _marines->m;
		delete _marines;
		this->_marines = tmp;
	}
	return;
}

Squad &Squad::operator=(Squad const &rfs) {
	this->_units = rfs._units;

	t_list **dst = &this->_marines;
	t_list *tmp = rfs._marines;

	while (tmp) {
		if (*dst) {
			if ((*dst)->m)
				delete (*dst)->m;
		} else {
			*dst = new t_list;
		}
		(*dst)->m = tmp->m->clone();
		dst = &(*dst)->next;
		tmp = tmp->next;
	}
	if (*dst) {
		tmp = *dst;
		*dst = NULL;
		while (tmp) {
			t_list *tmpNext;
			if (tmp->m)
				delete tmp->m;
			tmpNext = tmp->next;
			delete tmp;
			tmp = tmpNext;
		}
	}
	return *this;
}

int 	Squad::push(ISpaceMarine *mar) {
	t_list **tmp;

	tmp = &(this->_marines);
	while (*tmp) {
		tmp = &(*tmp)->next;
	}
	*tmp = new t_list;
	(*tmp)->m = mar;
	(*tmp)->next = NULL;
	this->_units++;
	return (this->_units);
}

int 		Squad::getCount() const {
	return this->_units;
}

ISpaceMarine *Squad::getUnit(int n) const {
	t_list *tmp;
	int i = 0;

	tmp = this->_marines;
	while (tmp) {
		if (i == n)
			return tmp->m;
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}

