/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 12:35:35 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/15 21:00:54 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() {
	int i = 0;

	while (i < 201)
	{
		try {
			Bureaucrat larry("Larry", i);
			std::cout << larry;
		}
		catch (Bureaucrat::GradeTooLowException &e) {
			std::cout << e.what() << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException &e) {
			std::cout << e.what() << std::endl;
		}
		i += 50;
	}

	std::cout << "-------" << std::endl;
	Bureaucrat barry("Barry", 148);
	i = 0;
	while (i < 5) {
		try {
			barry--;
			std::cout << barry;
		}
		catch (Bureaucrat::GradeTooLowException &e) {
			std::cout << e.what() << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException &e) {
			std::cout << e.what() << std::endl;
		}
		i++;
	}

	std::cout << "-------" << std::endl;
	Bureaucrat harry("Harry", 4);
	i = 0;
	while (i < 5) {
		try {
			harry++;
			std::cout << harry;
		}
		catch (Bureaucrat::GradeTooLowException &e) {
			std::cout << e.what() << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException &e) {
			std::cout << e.what() << std::endl;
		}
		i++;
	}

	std::cout << "-------" << std::endl;
	ShrubberyCreationForm tree("tree");
	Bureaucrat boba("Boba", 137);
	tree.execute(boba);
	std::cout << "-------" << std::endl;
	Bureaucrat bob("Bob", 143);
	i = 3;
	while (i > 0) {
		std::cout << bob;
		try {
			bob.signForm(tree);
			tree.execute(bob);
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		bob++;
		i--;
	}
	tree.execute(boba);
	RobotomyRequestForm robo("Robo");
	srand(time_t());
	robo.beSigned(harry);
	robo.execute(harry);
	robo.execute(harry);
	robo.execute(harry);
	robo.execute(harry);
	robo.execute(harry);

	PresidentialPardonForm pardo("Pardo");
	Bureaucrat gaga("Gaga", 6);
	pardo.execute(bob);
	gaga.signForm(pardo);
	std::cout << "-------" << std::endl;
	std::cout << gaga;
	try {
		pardo.execute(gaga);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	gaga++;
	gaga.executeForm(pardo);

	std::cout << "-------" << std::endl;
	Intern intrn;
	Form *a1 = intrn.makeForm("shrubberry creation", "tree");
	a1->beSigned(gaga);
	a1->execute(gaga);
	Form *a2 = intrn.makeForm("robotomy request", "robo");
	a2->beSigned(gaga);
	a2->execute(gaga);
	Form *a3 = intrn.makeForm("presidential pardon", "presidential");
	a3->beSigned(gaga);
	a3->execute(gaga);
	Form *a4 = intrn.makeForm("wtf", "wtf");
	a4 = NULL;
}