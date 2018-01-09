/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 12:06:33 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/08 13:32:30 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int		main() {
	Sample	instance;

	instance.publicfoo = 42;
	std::cout << "Instance publicfoo: " << instance.publicfoo << std::endl;
	instance.publicbar();

	//instance._privatefoo = 8;
	//instance._privatebar();

	return (0);
}