/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 20:36:09 by Ulliwy            #+#    #+#             */
/*   Updated: 2018/01/15 20:53:57 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
#define INTERN_H
#include "Form.hpp"

class Intern {
public:
	Intern();
	Intern(Intern const &rfs);
	~Intern();

	Intern &operator=(Intern const &rfs);
	Form *makeForm(std::string name, std::string target);
};

#endif
