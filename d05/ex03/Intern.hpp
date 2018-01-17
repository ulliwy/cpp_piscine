/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 20:36:09 by Ulliwy            #+#    #+#             */
/*   Updated: 2018/01/16 11:30:23 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
#define INTERN_H
#include "Form.hpp"

class Intern {
public:
	Intern();
	Intern(Intern const &rfs);
	virtual ~Intern();

	Intern &operator=(Intern const &rfs);
	Form *makeForm(std::string name, std::string target);
};

#endif
