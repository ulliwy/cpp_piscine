/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 12:23:01 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/18 13:54:07 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <algorithm>
#include <cstdint>
#include <iterator>

Span::Span(unsigned int N) : _N(N), _current(0) {
}

Span::Span(Span const &rfs) {
	*this = rfs;
}

Span::~Span() {
}

Span &Span::operator=(Span const &rfs) {
	_sp = rfs._sp;
	_N = rfs._N;
	return *this;
}

void Span::addNumber(int number) throw(std::exception) {
	if (_current + 1 > _N)
		throw (std::exception());
	_sp.push_back(number);
	_current++;
}

int Span::longestSpan() throw(std::exception) {
	if (_current <= 1 || _N <= 1)
		throw (std::exception());
	return (*(std::max_element(_sp.begin(), _sp.end())) - *(std::min_element(_sp.begin(), _sp.end())));
}

int Span::shortestSpan() throw(std::exception) {
	if (_current <= 1 || _N <= 1)
		throw (std::exception());
	std::vector<int> tmp = _sp;
	std::sort(tmp.begin(), tmp.end());
	int diff = INT_MAX;
	for (std::vector<int>::iterator it = tmp.begin(); it != tmp.end() - 1; ++it) {
		if (*(it + 1) - *it < diff)
			diff = *(it + 1) - *it;
	}
	return diff;
}

void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end) throw(std::exception) {
	if (_current + std::distance(begin, end) > _N)
		throw (std::exception());
	_current += std::distance(begin, end);
	for (std::vector<int>::iterator it = begin; it !=end; ++it) {
		_sp.push_back(*it);
	}
}
