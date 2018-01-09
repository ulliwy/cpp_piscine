/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 12:06:33 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/08 12:30:15 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int		main() {
	Sample	instance;

	instance.foo = 42;
	std::cout << "Instance foo: " << instance.foo << std::endl;
	instance.bar();

	return (0);
}