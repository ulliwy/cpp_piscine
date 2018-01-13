/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   poly1.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 11:08:15 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/12 11:29:28 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Character {
public:
	virtual void	sayHello(std::string const &target); //method, dynamic, virtual member function
};

class Warrior : public Character {
public:
	virtual void	sayHello(std::string const &target);
};

class Cat {
	//[ ... ]
};

void	Character::sayHello(std::string const &target) {
	std::cout << "Hello " << target << "!" << std::endl;
}

void	Warrior::sayHello(std::string const &target) {
	std::cout << "F u " << target << "!" << std::endl;
}

int main() {
	Warrior *a = new Warrior();
	Character *b = new Warrior();

	//Warrior *c = new Characte(); <-no
	//Character *d = new Cat(); <-no

	a->sayHello("you");
	b->sayHello("you");

	delete a;
	delete b;
}