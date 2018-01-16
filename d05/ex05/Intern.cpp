/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 20:36:09 by Ulliwy            #+#    #+#             */
/*   Updated: 2018/01/15 20:55:11 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {
}

Intern::Intern(Intern const &rfs) {
	(void)rfs;
}

Intern::~Intern() {
}

Intern &Intern::operator=(Intern const &rfs) {
	(void)rfs;
	return *this;
}

Form *Intern::makeForm(std::string name, std::string target) {
	if (name == "shrubberry creation") {
		std::cout << "Intern creates " << name << std::endl;
		return (new ShrubberyCreationForm(target));
	} else if (name == "robotomy request") {
		std::cout << "Intern creates " << name << std::endl;
		return (new RobotomyRequestForm(target));
	} else if (name == "presidential pardon") {
		std::cout << "Intern creates " << name << std::endl;
		return (new PresidentialPardonForm(target));
	} else {
		std::cout << name << " is unknown form" << std::endl;
		return NULL;
	}
}