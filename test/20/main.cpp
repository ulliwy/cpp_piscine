/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 12:04:19 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/17 12:36:28 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Vertex.tpp"

// template<typename T>

// T const &max(T const &x, T const &y) {
// 	return (x >= y ? x : y);
// }

// int main() {
// 	int a = 21;
// 	int b = 42;

// 	std::cout << max<int>(a, b) << std::endl; // Explicit instanciating

// 	float c = -1.5f;
// 	float d = 0.01;

// 	std::cout << max<float>(c, d) << std::endl;
// }

int main() {
	Vertex<int> v1(12, 34, 56);
	Vertex<> v2(12, 34, 56);

	std::cout << v1 << std::endl;
	std::cout << v2 << std::endl;
}