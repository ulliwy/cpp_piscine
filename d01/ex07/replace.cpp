/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 19:23:31 by Ulliwy            #+#    #+#             */
/*   Updated: 2018/01/09 23:47:01 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

void	replace(std::string name, std::string s1, std::string s2) {
	char			c;
	std::string		temp;
	std::ifstream	ifs(name);
	int				i = 0;

	if (!ifs.is_open()) {
		std::cout << "No such file." << std::endl;
		return;
	}

	for (int i = 0; i < (int)name.length(); i++) {
		name[i] = std::toupper(name[i]);
	}
	std::ofstream	ofs(name + ".replace");

	while (ifs.get(c)) {
		if (c == s1[i]) {
			temp += c;
			if (temp.length() ==s1.length()) {
				ofs << s2;
				temp = "";
				i = 0;
			}
			else {
				i++;
			}
		}
		else {
			i = 0;
			if (temp != "") {
				ofs << temp << c;
				temp = "";
			}
			else {
				ofs << c;
			}
		}
	}
	ifs.close();
	ofs.close();
}

int 	main(int argc, char **argv) {
	std::string	name;
	std::string s1;
	std::string	s2;

	if (argc < 4) {
		std::cout << "Name, s1 or s2 is not specified." << std::endl;
		return (1);
	}
	if (!argv[1][0] || !argv[2][0] || !argv[3][0]) {
		std::cout << "Name, s1 and s2 can't be empty." << std::endl;
		return (1);
	}
	name = argv[1];
	s1 = argv[2];
	s2 = argv[3];

	replace(name, s1, s2);

	return (0);
}