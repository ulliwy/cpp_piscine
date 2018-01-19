/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stl2.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 11:19:58 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/18 11:23:34 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <list>

void displayInt(int i) {
	std::cout << i << std::endl;
}

int main() {
	std::list<int> lst;

	lst.push_back(10);
	lst.push_back(1);
	lst.push_back(17);
	lst.push_back(34);
	lst.push_back(190);
	lst.push_back(133);
	lst.push_back(12);

	for_each(lst.begin(), lst.end(), displayInt);
}