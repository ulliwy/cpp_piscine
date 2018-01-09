/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ref2.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 11:43:46 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/09 12:00:46 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	byPtr(std::string *str) {
	*str += " and more";
}

void	byConstPtr(std::string const *str) {
	std::cout << *str << std::endl;
}

void	byRef(std::string &str) {
	str += " and more";
}

void	byConstRef(std::string const &str) {
	std::cout << str << std::endl;
}

int 	main() {
	std::string str = "my string";

	std::cout << str << std::endl;

	byPtr(&str);
	byConstPtr(&str);

	str = "new string";

	std::cout << str << std::endl;

	byRef(str);
	byConstRef(str);

	return (0);
}