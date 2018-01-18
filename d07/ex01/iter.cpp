/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 13:15:34 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/17 14:33:26 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
void	iter(T *arr, ssize_t size, void (*f)(T &)) {
	for (int i = 0; i < size; i++) {
		f(arr[i]);
	}
}

template<typename T>
void	print(T &rfs) {
	std::cout << rfs << std::endl;
}

template<typename T>
void	inc(T &rfs) {
	rfs++;
}


int main( void ) {
	int arr[] = {12, 23, 34, 45, 56, 67};
	::iter(arr, sizeof(arr) / sizeof(int), print);
	std::cout << "-----------" << std::endl;
	::iter(arr, sizeof(arr) / sizeof(int), inc);
	::iter(arr, sizeof(arr) / sizeof(int), print);
}