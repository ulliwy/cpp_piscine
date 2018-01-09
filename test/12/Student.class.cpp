/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student.class.cpp                                  :+:      :+:    :+:   */
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
	Student(std::string login) :_login(login) {
		std::cout << "Student " << this->_login << " was born." << std::endl;
	}

	~Student() {
		std::cout << "Student " << this->_login << " died." << std::endl;
	}
};

int		main() {
	Student 	bob = Student("Bob"); //on a stack
	Student 	*ann = new Student("Ann"); //dynamically

	delete ann;

	return (0);
}