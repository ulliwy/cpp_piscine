/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 15:22:08 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/16 21:09:53 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <limits>

struct Data {
	std::string s1;
	int n;
	std::string s2;
};

void *serialize(void) {
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
	char *data = new char[8 + 8 + sizeof(int)];
	char *tmp = data;

	for (int i = 0; i < 8; i++) {
		*data = alpha[rand() % (sizeof(alpha) - 1)];
		data++;
	}
	*(reinterpret_cast<int*>(data)) = rand() % std::numeric_limits<int>::max();
	data += sizeof(int);
	for (int i = 0; i < 8; i++) {
		*data = alpha[rand() % (sizeof(alpha) - 1)];
		data++;
	}
	return (tmp);
}

Data *deserialize(void *raw) {
	Data *dt = new Data;

	char *ptr = reinterpret_cast<char *>(raw);
	dt->s1.assign(ptr, 8);
	ptr += 8;
	dt->n = *(reinterpret_cast<int*>(ptr));
	ptr += sizeof(int);
	dt->s2.assign(ptr, 8);
	return dt;
}

int main()
{
	Data *t;
	void *r;

	srand(std::time(0));
	r = serialize();
	t = deserialize(r);
	std::cout << "s1: <" << t->s1 << ">" << std::endl;
	std::cout << "n:  <" << t->n << ">" << std::endl;
	std::cout << "s2: <" << t->s2 << ">" << std::endl;

}
