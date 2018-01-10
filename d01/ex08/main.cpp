/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 22:02:39 by Ulliwy            #+#    #+#             */
/*   Updated: 2018/01/09 22:29:20 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Human.hpp"

int		main() {
	Human	me;
	
	me.action("meleeAttack", "target");
	me.action("rangedAttack", "target");
	me.action("intimidatingShout", "target");

	return (0);
}