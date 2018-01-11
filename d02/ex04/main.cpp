/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 15:06:19 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/10 22:29:04 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include "Fixed.hpp"

int		ft_same_prio(char c1, char c2)
{
	if (c2 == '(' || c2 == ')')
		return (0);
	if ((c1 == '*' || c1 == '/' || c1 == '%') && (c2 == '+' || c2 == '-'))
		return (0);
	return (1);
}

Fixed	doop(char op, Fixed v1, Fixed v2, int *res)
{
	if (op == '+')
		return (v1 + v2);
	if (op == '-')
		return (v1 - v2);
	if (op == '*')
		return (v1 * v2);
	else {
		if (v2 == Fixed()) {
			std::cout << "Error in the expression." << std::endl;
			*res = 1;
			return (v2);
		}
		return (v1 / v2);
	}
}

void	eval_expr(char *str) {
	std::stringstream st(str);
	char	c;
	Fixed	values[500];
	char	operators[500];
	int 	v = 0;
	int 	o = 0;
	Fixed	val;
	float	temp;
	char	ct;
	int		res = 0;

	while (st.get(c))
	{
		if (c == ' ')
			continue;
		if (c >= '0' && c <= '9')
		{
			st.unget();
			st >> temp;
			values[v] = Fixed(temp);
			v++;
			continue;
		}
		if (c == '(') {
			operators[o] = c;
			o++;
		}
		if (c == '-') {
			st.get(ct);
			if (ct >= '0' && ct <= '9') {
				st.unget();
				st.unget();
				st >> temp;
				values[v] = Fixed(temp);
				v++;
				continue;
			}
			else
				st.unget();
		}
		if (c == '+' || c == '-' || c == '*' || c == '/' || c == ')') {
			if (c == ')') {
				while (operators[o - 1] != '(') {
					val = doop(operators[o - 1], values[v - 2], values[v - 1], &res);
					if (res) return;
					values[v - 2] = val;
					v--;
					o--;
				}
				o--;
			}
			else {
				while (o > 0 && ft_same_prio(c, operators[o - 1])) {
					val = doop(operators[o - 1], values[v - 2], values[v - 1], &res);
					if (res) return;
					values[v - 2] = val;
					v--;
					o--;
				}
				operators[o] = c;
				o++;
			}
		}
		if (!((c >= '0' && c <= '9') || c == '+' || c == '-' || c == ' '
			|| c == '*' || c == '/' || c == ')' || c == '(' || c == '.')) {
			std::cout << "Error in the expression." << std::endl;
		return;
		}
	}
	while (o > 0) {
		val = doop(operators[o - 1], values[v - 2], values[v - 1], &res);
		if (res) return;
		values[v - 2] = val;
		v--;
		o--;
	}
	if (v != 1)
		std::cout << "Error in the expression." << std::endl;
	else
		std::cout << values[0] << std::endl;
}

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Accepting one string to evaluate." << std::endl;
		return (1);
	}
	eval_expr(argv[1]);
	return (0);
}