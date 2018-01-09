/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 15:32:00 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/09 10:55:53 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include "Contact.class.hpp"

void	add_contact(Contact *c) {
	std::cout << "Creating contact..." << std::endl;
	std::cout << "Enter first name: ";
	std::getline(std::cin, c->firstName);
	std::cout << "Enter last name: ";
	std::getline(std::cin, c->lastName);
	std::cout << "Enter nickname: ";
	std::getline(std::cin, c->nickname);
	std::cout << "Enter login: ";
	std::getline(std::cin, c->login);
	std::cout << "Enter postal address: ";
	std::getline(std::cin, c->postalAddress);
	std::cout << "Enter email address: ";
	std::getline(std::cin, c->email);
	std::cout << "Enter phone number: ";
	std::getline(std::cin, c->phone);
	std::cout << "Enter birthday date: ";
	std::getline(std::cin, c->birthday);
	std::cout << "Enter favorite meal: ";
	std::getline(std::cin, c->favMeal);
	std::cout << "Enter underwear color: ";
	std::getline(std::cin, c->underColor);
	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, c->darkSecret);
	std::cout << "Contact created!" << std::endl;
	std::cout << "----------------" << std::endl;
}

void	search(Contact book[8], int i) {
	int			k;
	std::string index;

	std::cout << std::setw(11) << "index|";
	std::cout << std::setw(11) << "first name|";
	std::cout << std::setw(11) << "last name|";
	std::cout << std::setw(10) << "nickname" << std::endl;
	k = 0;
	while (k < i) {
		book[k].print(k);
		k++;
	}
	std::cout << "Enter index of contact to display: ";
	std::getline(std::cin, index);
	if ((index[0] - '0') < i && (index[0] - '0') >= 0 && !index[1]) {
		std::cout << "Contact information:" << std::endl;
		book[index[0] - '0'].print_info();
		std::cout << "----------------" << std::endl;
	}
	else {
		std::cout << "Sorry, no such index..." << std::endl;
		std::cout << "----------------" << std::endl;
	}
}

int		main(void) {
	Contact			book[8];
	std::string		cmd;
	int				i;

	i = 0;
	std::cout << "Welcome to 80s!" << std::endl;
	while (1) {
		std::cout << "Enter a command: ";
		std::getline(std::cin, cmd);
		if (cmd == "EXIT") {
			std::cout << "Bye!" << std::endl;
			break;
		}
		else if (cmd == "ADD") {
			if (i < 8) {
				add_contact(&book[i]);
				i++;
			}
			else {
				std::cout << "Phonebook is full" << std::endl;
				std::cout << "----------------" << std::endl;
			}
			continue;
		}
		else if (cmd == "SEARCH") {
			search(book, i);
		}
		else {
			std::cout << "Unknown command [" << cmd << "]. Try again!" << std::endl;
			std::cout << "----------------" << std::endl;
		}
	}
	return (0);
}