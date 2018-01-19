/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stl1.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 11:02:32 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/18 11:19:53 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <map>
#include <vector>
#include <list>

class IOperation;

int main() {
	// LIST
	std::list<int>	lst1;

	lst1.push_back(1);
	lst1.push_back(17);
	lst1.push_back(21);

	std::list<int>::coonst_iterator it;
	std::list<int>::const_iterator ite = lst1.end();

	for (it = lst1.begin(); it != ite; ++it) {
		std::cout << *it << std::endl;
	}

	// MAP
	std::map<std::string, IOperation*> map1;
	map1["opA"] = new OperationA;
	map1["opB"] = new OperationB;

	// VECTOR
	std::vector<int> v1;
	std::vector<int> v2(42, 100);

	
}