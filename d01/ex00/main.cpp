/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 12:35:22 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/09 13:03:51 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

void	ponyOnTheHeap() {
	Pony 	*pony = new Pony("Heappy", "white");
	pony->sayName();
	delete pony;
}

void	ponyOnTheStack() {
	Pony 	pony = Pony("Stacky", "red");
	pony.sayName();
}

int		main() {
	std::cout << "Everything about heap pony: " << std::endl;
	ponyOnTheHeap();
	std::cout << std::endl << "Everything about stack pony: " << std::endl;
	ponyOnTheStack();
	return (0);
}