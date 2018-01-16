/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 12:35:35 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/15 15:56:17 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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
}