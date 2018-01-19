/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 12:23:01 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/18 13:33:08 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
#define SPAN_H

#include <vector>
#include <exception>

class Span {
public:
	Span(unsigned int N);
	Span(Span const &frs);
	virtual ~Span();

	Span &operator=(Span const &rfs);
	void addNumber(int number) throw(std::exception);
	void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end) throw(std::exception);
	int longestSpan() throw(std::exception);
	int shortestSpan() throw(std::exception);

private:
	unsigned int _N;
	unsigned int _current;
	std::vector<int> _sp;

	Span();
};

#endif
