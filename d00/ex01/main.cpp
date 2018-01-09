/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 15:32:00 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/08 16:37:56 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

void	add_contact(Contact *c) {
	std::cout << "Creating contact..." << std::endl;
	std::cout << "Enter first name: ";
	std::cin >> c->firstName;
	std::cout << "Enter last name: ";
	std::cin >> c->lastName;
	std::cout << "Enter nickname: ";
	std::cin >> c->nickname;
	std::cout << "Enter login: ";
	std::cin >> c->login;
	std::cout << "Enter postal address: ";
	std::cin >> c->postalAddress;
	std::cout << "Enter phone number: ";
	std::cin >> c->phone;
	std::cout << "Enter birthday date: ";
	std::cin >> c->birthday;
	std::cout << "Enter favorite meal: ";
	std::cin >> c->favMeal;
	std::cout << "Enter undewear color: ";
	std::cin >> c->underColor;
	std::cout << "Enter darkest secret: ";
	std::cin >> c->darkSecret;
	std::cout << "Contact created!" << std::endl; 
}

int		main(void) {
	Contact			book[8];
	std::string		cmd;
	int				i;

	i = 0;
	std::cout << "Welcome to 80s!" << std::endl;
	while (1) {
		std::cout << "Enter a command: ";
		std::cin >> cmd;
		if (cmd == "EXIT") {
			std::cout << "Bye!" << std::endl;
			break;
		}
		else if (cmd == "ADD") {
			if (i < 8) {
				add_contact(&book[i]);
				i++;
			}
			else
				std::cout << "Phonebook is full" << std::endl;
			continue;
		}
		else {
			std::cout << "Unknown command [" << cmd << "]. Try again!" << std::endl;
		}
	}
	return (0);
}