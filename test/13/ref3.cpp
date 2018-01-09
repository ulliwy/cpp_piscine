/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ref3.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 11:43:46 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/09 12:15:28 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Student {
private:
	std::string	_login;

public:
	Student(std::string login) :_login(login) {
	}

	std::string			&getLoginRef() {
		return this->_login;
	}

	std::string	const	&getLoginRefConst() const {
		return this->_login;
	}

	std::string			*getLoginPtr() {
		return &(this->_login);
	}

	std::string	const	*getLoginPtrConst() const {
		return &(this->_login);
	}

	~Student() {
		std::cout << "Student " << this->_login << " died." << std::endl;
	}
};

int main() {
	Student 		bob = Student("bob");
	Student const 	ann = Student ("ann");

	std::cout << bob.getLoginRefConst() << " " << ann.getLoginRefConst() << std::endl;
	std::cout << *(bob.getLoginPtrConst()) << " " << *(ann.getLoginPtrConst()) << std::endl;

	bob.getLoginRef() = "boba";
	std::cout << bob.getLoginRefConst() << std::endl;

	*(bob.getLoginPtr()) = "bababa";
	std::cout << *(bob.getLoginPtrConst()) << std::endl;
	return (0);
}