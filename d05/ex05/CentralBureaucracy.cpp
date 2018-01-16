/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CentralBureaucracy.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 22:11:36 by Ulliwy            #+#    #+#             */
/*   Updated: 2018/01/15 23:23:43 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CentralBureaucracy.hpp"

CentralBureaucracy::CentralBureaucracy() : _s(0), _e(0), _i(0) {
	Intern intrn;

	for (int i = 0; i < 20; i++) {
		_block[i].setIntern(intrn);
	}
}

CentralBureaucracy::CentralBureaucracy(CentralBureaucracy const &rfs) {
	*this = rfs;
}

CentralBureaucracy::~CentralBureaucracy() {

}

CentralBureaucracy &CentralBureaucracy::operator=(CentralBureaucracy const &rfs) {
	for (int i = 0; i < 50; i++) {
		_targets[i] = rfs._targets[i];
	}
	return *this;
}

void CentralBureaucracy::feedSign(Bureaucrat &rfs) {
	if (_s < 20) {
		_block[_s].setSign(rfs);
		_s++;
	} else {
		std::cout << "No more places for signing bureaucrats" << std::endl;
	}
}

void CentralBureaucracy::feedExec(Bureaucrat &rfs) {
	if (_e < 20) {
		_block[_e].setExec(rfs);
		_e++;
	} else {
		std::cout << "No more places for executing bureaucrats" << std::endl;
	}
}

void CentralBureaucracy::queueUp(std::string target) {
	int i = 0;
	while (i < 50) {
		if (_targets[i] == "") {
			_targets[i] = target;
			_i++;
			return;
		}
		i++;
	}
	std::cout << "Targets queue is full." << std::endl;
}

void CentralBureaucracy::doBureaucracy() {
	if (_i == 0) {
		std::cout << "Targets queue is empty." << std::endl;
	}

	std::string form_list[3] = {"robotomy request", "shrubberry creation", "presidential pardon"};
	int i = 0;
	int ii = 0;
	while (i < 20) {
		while (ii < 50) {
			if (_targets[ii] != "") {
				try {
					_block[i].doBureaucracy(form_list[rand() % 3], _targets[ii]);
				} catch (std::exception &e) {
					std::cout << e.what() << std::endl;
				}
				std::cout << "-------" << std::endl;
			}
			ii++;
		}
		i++;
	}

}
