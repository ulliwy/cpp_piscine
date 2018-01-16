/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 18:57:18 by Ulliwy            #+#    #+#             */
/*   Updated: 2018/01/15 19:59:52 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: Form(target, 145, 137) {
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &rfs) {
	*this = rfs;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rfs) {
	(void)rfs;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	if (!getSigned()) {
		std::cout << "Form is not signed." << std::endl;
	} else if (getExecGrade() < executor.getGrade()) {
		throw Form::GradeTooLowException();
	} else {
		std::string filename = getName() + "_shrubbery";
		std::ofstream o(filename);
		o << "       _-_" << std::endl;
		o << "    /~~   ~~\\" << std::endl;
		o << " /~~         ~~\\" << std::endl;
		o << "{               }" << std::endl;
		o << " \\  _-     -_  /" << std::endl;
		o << "   ~  \\\\ //  ~" << std::endl;
		o << "_- -   | | _- _" << std::endl;
		o << "  _ -  | |   -_" << std::endl;
		o << "      // \\\\" << std::endl;
		o.close();
		std::cout << executor.getName() << " executes " << getName() << std::endl;
	}
}
