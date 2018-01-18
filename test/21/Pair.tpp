/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pair.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 12:44:28 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/17 13:09:06 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

template<typename T, typename U>
class Pair {
public:
	Pair<T, U>(T const &trfs, U const &urfs) : _trfs(trfs), _urfs(urfs) {
		std::cout << "Generic template" << std::endl;
		return;
	}
	~Pair<T, U>() {}

	T const &getT() const {return _trfs;}
	U const &getU() const {return _urfs;}

private:
	T const &_trfs;
	U const &_urfs;

	Pair<T, U>();

};

// partial specialisation

template<typename U>
class Pair<int, U> {
public:
	Pair<int, U>(int const trfs, U const &urfs) : _trfs(trfs), _urfs(urfs) {
		std::cout << "Int partial template" << std::endl;
		return;
	}
	~Pair<int, U>() {}

	int const &getT() const {return _trfs;}
	U const &getU() const {return _urfs;}

private:
	int const _trfs;
	U const &_urfs;

	Pair<int, U>();

};

// full specialization

template<>
class Pair<bool, bool> {
public:
	Pair<bool, bool>(bool const trfs, bool const urfs) {
		std::cout << "Bool/bool template" << std::endl;
		this->_n = 0;
		this->_n |= static_cast<int>(trfs) << 0;
		this->_n |= static_cast<int>(urfs) << 1;

		return;
	}
	~Pair<bool, bool>() {}

	bool getT() const {return (this->_n & 0x01);}
	bool getU() const {return (this->_n & 0x02);}

private:
	int _n;

	Pair<bool, bool>();

};

template<typename T, typename U>
std::ostream &operator<<(std::ostream &o, Pair<T, U> const &p) {
	o << "Pair(" << p.getT() << ", " << p.getU() << ")";
	return o;
}

std::ostream &operator<<(std::ostream &o, Pair<bool, bool> const &p) {
	o << std::boolalpha << "Pair(" << p.getT() << ", " << p.getU() << ")";
	return o;
}



