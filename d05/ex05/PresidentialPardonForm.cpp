/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 18:57:18 by Ulliwy            #+#    #+#             */
/*   Updated: 2018/01/15 20:27:23 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: Form(target, 25, 5) {
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &rfs) {
	*this = rfs;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rfs) {
	(void)rfs;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (!getSigned()) {
		std::cout << "Form is not signed." << std::endl;
	} else if (getExecGrade() < executor.getGrade()) {
		throw Form::GradeTooLowException();
	} else {
		std::cout << getName() << " has been pardoned by Zafod Beeblebrox." << std::endl;
	}
}
