/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 12:44:06 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/17 13:06:35 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pair.tpp"
#include <iostream>

int main() {
	Pair<int, int> p1(1, 2);
	Pair<std::string, float> p2("Pi", 3.14f);
	Pair<float, bool> p3(4.2f, true);
	Pair<bool, bool> p4(true, false);

	std::cout << p1 << std::endl;
	std::cout << p2 << std::endl;
	std::cout << p3 << std::endl;
	std::cout << p4 << std::endl;
}