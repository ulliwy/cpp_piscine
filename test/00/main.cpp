/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 11:07:30 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/08 11:59:59 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		gl_var = 1;
int		f(void) {return 2;}

namespace Foo {
	int		gl_var = 5;
	int		f(void) {return 4;}
}

namespace Bar {
	int		gl_var = 10;
	int		f(void) {return 6;}
}

namespace Muf = Bar;

int		main(void) {
	printf("gl_var:		[%d]\n", gl_var);
	printf("f():		[%d]\n\n", f());

	printf("Foo::gl_var:	[%d]\n", Foo::gl_var); //Foo::gl_var scope resolution operator
	printf("Foo::f():	[%d]\n\n", Foo::f());

	printf("Bar::gl_var:	[%d]\n", Bar::gl_var);
	printf("Bar::f():	[%d]\n\n", Bar::f());

	printf("Muf::gl_var:	[%d]\n", Muf::gl_var);
	printf("Muf::f():	[%d]\n\n", Muf::f());

	printf("::gl_var:	[%d]\n", ::gl_var);
	printf("::f():		[%d]\n\n", ::f());

	return (0);
}