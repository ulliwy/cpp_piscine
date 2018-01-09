/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ref1.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 11:43:46 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/09 11:51:38 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
	int 	numberOfBalls = 42;

	int		*ballsPtr = &numberOfBalls; //pointer to balls
	int		&ballsRef = numberOfBalls; //reference to balls

	std::cout << numberOfBalls << " " << *ballsPtr << " " << ballsRef << std::endl;

	*ballsPtr = 21;
	std::cout << numberOfBalls << std::endl;

	ballsRef = 84;
	std::cout << numberOfBalls << std::endl;

	return (0);
}