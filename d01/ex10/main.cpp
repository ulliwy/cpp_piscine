/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 23:57:45 by Ulliwy            #+#    #+#             */
/*   Updated: 2018/01/10 01:07:14 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>
#include <cstring>
#include <ios>
#include <errno.h>

int		main(int argc, char **argv) {
	std::string		str;
	std::ifstream	ifs;
	int				i;

	if (argc < 2) {
		while (!(std::cin.eof())) {
			getline(std::cin, str);
			std::cout << str << std::endl;
		}
		return (0);
	}

	i = 1;
	while (i < argc) {
		ifs.open(argv[i]);
		if (!(ifs.is_open())) {
			std::cout << "cato9tails: " << argv[i] << ": "
					<< std::strerror(errno) << std::endl;
		}
		while (getline(ifs, str) && ifs.is_open())
			std::cout << str << std::endl;
		ifs.close();
		i++;
	}
}