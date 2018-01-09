/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_test.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 11:34:44 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/08 11:50:08 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(void){
	char buff[512];

	std::cout << "Hello world!" << std::endl;

	std::cout << "Input a word: ";
	std::cin >> buff;
	std::cout << "The word was: [" << buff << "]." << std::endl;

	return (0);
}