/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   poly2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 11:08:15 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/12 11:46:47 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class ACharacter {
public:
	virtual void	attack(std::string const &target) = 0;
	virtual void	sayHello(std::string const &target);
};

class Warrior : public ACharacter {
public:
	virtual void	attack(std::string const &target);
};

void	ACharacter::sayHello(std::string const &target) {
	std::cout << "Hello " << target << "!" << std::endl;
}

void	Warrior::attack(std::string const &target) {
	std::cout << "Attacks " << target << "!" << std::endl;
}

class ICoffeeMaker { //interface, no attributes
public:
	virtual void	fillWaterTank(IWaterSource *src) = 0;
	virtual ICoffeeMakermakeCoffee(std::string const &type) = 0; 
};

int main() {
	ACharacter *b = new Warrior();

	//ACharacter *a = new ACharacter(); <-no

	b->sayHello("you");
	b->attack("you also");

	// delete b;
}