/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 12:35:35 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/15 23:29:33 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"
#include "CentralBureaucracy.hpp"

int main() {
	CentralBureaucracy central;
	central.feedSign(*new Bureaucrat("stas", 1));
	central.feedSign(*new Bureaucrat("stas", 70));
	central.feedSign(*new Bureaucrat("stas", 150));
	central.feedSign(*new Bureaucrat("stas", 150));
	central.feedSign(*new Bureaucrat("stas", 2));
	central.feedSign(*new Bureaucrat("stas", 150));
	central.feedSign(*new Bureaucrat("stas", 150));
	central.feedSign(*new Bureaucrat("stas", 1));
	central.feedSign(*new Bureaucrat("stas", 150));
	central.feedSign(*new Bureaucrat("stas", 150));
	central.feedSign(*new Bureaucrat("stas", 150));
	central.feedSign(*new Bureaucrat("stas", 150));
	central.feedSign(*new Bureaucrat("stas", 150));
	central.feedSign(*new Bureaucrat("stas", 150));
	central.feedSign(*new Bureaucrat("stas", 140));
	central.feedSign(*new Bureaucrat("stas", 150));
	central.feedSign(*new Bureaucrat("stas", 150));
	central.feedSign(*new Bureaucrat("stas", 150));

	central.feedExec(*new Bureaucrat("vlad", 50));
	central.feedExec(*new Bureaucrat("vlad", 150));
	central.feedExec(*new Bureaucrat("vlad", 33));
	central.feedExec(*new Bureaucrat("vlad", 90));
	central.feedExec(*new Bureaucrat("vlad", 100));
	central.feedExec(*new Bureaucrat("vlad", 100));
	central.feedExec(*new Bureaucrat("vlad", 1));
	central.feedExec(*new Bureaucrat("vlad", 99));
	central.feedExec(*new Bureaucrat("vlad", 12));
	central.feedExec(*new Bureaucrat("vlad", 23));
	central.feedExec(*new Bureaucrat("vlad", 4));
	central.feedExec(*new Bureaucrat("vlad", 22));
	central.feedExec(*new Bureaucrat("vlad", 5));
	central.feedExec(*new Bureaucrat("vlad", 2));
	central.feedExec(*new Bureaucrat("vlad", 10));
	central.feedExec(*new Bureaucrat("vlad", 1));
	for (int i = 0; i < 20; i++) {
		central.queueUp("target");
	}
	try {
		central.doBureaucracy();
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
