/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 22:02:29 by Ulliwy            #+#    #+#             */
/*   Updated: 2018/01/09 22:48:11 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human() {
	actions[0].action_name = "meleeAttack";
	actions[0].f = &Human::meleeAttack;
	actions[1].action_name = "rangedAttack";
	actions[1].f = &Human::rangedAttack;
	actions[2].action_name = "intimidatingShout";
	actions[2].f = &Human::intimidatingShout;
}

void	Human::meleeAttack(std::string const &target) {
	std::cout << "Melee Attack: " << target << std::endl;
}

void	Human::rangedAttack(std::string const &target) {
	std::cout << "Ranged Attack: " << target << std::endl;
}

void	Human::intimidatingShout(std::string const &target) {
	std::cout << "Intimidating Shout: " << target << std::endl;
}

void	Human::action(std::string const &action_name, std::string const &target) {
	for (int i = 0; i < 3; i++) {
		if (action_name == actions[i].action_name) {
			(this->*actions[i].f)(target);
			return;
		}
	}
	std::cout << "No such action." << std::endl;
}
