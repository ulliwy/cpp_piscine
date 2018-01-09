/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 13:20:19 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/09 14:56:31 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main() {
	std::cout << "<<Stack zombies are coming!>>" << std::endl;
	Zombie 			zom1;
	Zombie 			zom2;
	zom1.announce();
	zom2.announce();

	std::cout << std::endl << "<<Heap zombies are coming!>>" << std::endl;
	ZombieEvent 	*event = new ZombieEvent();
	event->setZombieType("heap");
	Zombie 			*zom3 = event->randomChump();
	Zombie 			*zom4 = event->randomChump();
	delete zom3;
	delete zom4;
	delete event;
}