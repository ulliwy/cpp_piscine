/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fstream1.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 12:19:42 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/09 12:26:53 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main() {
	std::ifstream	ifs("numbers");
	unsigned int 	dst;
	unsigned int	dst2;
	ifs >> dst >> dst2;

	std::cout << dst << " " << dst2;

	ifs.close();

	std::ofstream	ofs("test.out");
	ofs << "string" << std::endl;
	ofs.close();

	return (0);
}