/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 18:57:18 by Ulliwy            #+#    #+#             */
/*   Updated: 2018/01/16 11:30:18 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: Form(target, 72, 45) {
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &rfs) {
	*this = rfs;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rfs) {
	(void)rfs;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if (!getSigned()) {
		std::cout << "Form is not signed." << std::endl;
	} else if (getExecGrade() < executor.getGrade()) {
		throw Form::GradeTooLowException();
	} else {
		system("afplay drr.wav &");
		if (rand() % 2 == 0)
			std::cout << getName() << "  has been robotomized successfully." << std::endl;
		else
			std::cout << getName() << "  has not been robotomized. Failure." << std::endl;
	}
}
