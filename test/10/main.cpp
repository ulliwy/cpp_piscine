/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 12:06:33 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/08 14:18:37 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

void	f0(void) {
	Sample	inst;
	
	std::cout << "Number of inst: " << Sample::getNbInst() << std::endl;
	return ;
}

void	f1(void) {
	Sample	inst;

	std::cout << "Number of inst: " << Sample::getNbInst() << std::endl;
	f0();
	return ;
}

int		main() {
	std::cout << "Number of inst: " << Sample::getNbInst() << std::endl;
	f1();
	std::cout << "Number of inst: " << Sample::getNbInst() << std::endl;

	return (0);
}