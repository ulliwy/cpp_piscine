/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heritage1.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 10:50:33 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/11 11:10:01 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Animal {
private:
	int		_numberOfLegs;

public:
	Animal();
	Animal(Animal const &)
	Animal &operator=(Animal const &);
	~Animal();

	void	run(int distance);
};

class Cat : public Animal {
public:
	Cat();
	Cat(Cat const &)
	Cat &operator=(Cat const &);
	~Cat();

	void	scornSomeone(std::string &target);
};

class Pony : public Animal {
public:
	Pony();
	Pony(Pony const &)
	Pony &operator=(Pony const &);
	~Pony();

	void	doMagic(std::string &target);
	void	run(int distance);
};