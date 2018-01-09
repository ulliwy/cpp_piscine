/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 11:50:17 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/08 11:51:26 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Contact.class.hpp"

Contact::Contact(void) {
}

Contact::~Contact(void) {
}

void 		Contact::print(int index) const {
	std::cout << std::setw(10) << index << "|";
	std::cout << std::setw(10) << _trunc(this->firstName) << "|";
	std::cout << std::setw(10) << _trunc(this->lastName) << "|";
	std::cout << std::setw(10) << _trunc(this->nickname) << std::endl;
}

std::string		firstName;
	std::string		lastName;
	std::string		nickname;
	std::string		login;
	std::string		postalAddress;
	std::string		email;
	std::string		phone;
	std::string		birthday;
	std::string		favMeal;
	std::string		underColor;
	std::string		darkSecret;

void 		Contact::print_info() const {
	std::cout << "First name:     " << this->firstName << std::endl;
	std::cout << "Last name:      " << this->lastName << std::endl;
	std::cout << "Nickname:       " << this->nickname << std::endl;
	std::cout << "Login:          " << this->login << std::endl;
	std::cout << "Postal address: " << this->postalAddress << std::endl;
	std::cout << "Email address:  " << this->email << std::endl;
	std::cout << "Phone number:   " << this->phone << std::endl;
	std::cout << "Bithday date:   " << this->birthday << std::endl;
	std::cout << "Favorite meal:  " << this->favMeal << std::endl;
	std::cout << "Undewear color: " << this->underColor << std::endl;
	std::cout << "Darkest secret: " << this->darkSecret << std::endl;
}

std::string	Contact::_trunc(std::string name) const {
	if (name.length() > 10) {
		return (name.substr(0, 9) + ".");
	}
	return (name);
}
