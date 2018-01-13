/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 12:14:29 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/12 16:25:02 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include <iostream>

int main() {
	// Sorcerer bob("Bob", "wizard");
	// std::cout << bob << std::endl << std:: endl;

	// Victim scary("Scary");
	// std::cout << scary << std::endl << std:: endl;

	// bob.polymorph(scary);
	// scary.getPolymorphed();
	// std::cout << std:: endl;

	// Peon pepa("Pepa");
	// pepa.getPolymorphed();


	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
	return 0;
}