/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 12:35:35 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/16 11:22:43 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

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
	try {Form a("A", -1, 100);}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {Form b("B", 300, 100);}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {Form c("C", 100, -1);}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {Form a("A", 100, 1000);}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "-------" << std::endl;
	Form aa("AA", 3, 1);
	Bureaucrat bob("Bob", 4);
	i = 3;
	while (i > 0) {
		std::cout << bob;
		try {
			bob.signForm(aa);
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		bob++;
		i--;
	}
}