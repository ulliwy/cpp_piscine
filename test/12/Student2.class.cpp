/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student2.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 11:50:17 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/08 11:51:26 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Student {
private:
	std::string	_login;

public:
	Student() :_login("ldefault") {
		std::cout << "Student " << this->_login << " was born." << std::endl;
	}

	~Student() {
		std::cout << "Student " << this->_login << " died." << std::endl;
	}
};

int		main() {
	Student 	*students = new Student[42];

	delete [] students;

	return (0);
}