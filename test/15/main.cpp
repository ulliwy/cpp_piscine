/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 12:06:33 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/10 10:08:59 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int		main() {
	const Sample s;
	const char c = 'a';
	const int i = 5;
	const float f = 1.0;

	s.bar(c);
	s.bar(i);
	s.bar(f);
	s.bar(s);

	return (0);
}