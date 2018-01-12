/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 11:24:23 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/11 16:01:37 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main() {
	FragTrap 	lovely;
	FragTrap	roy("Roy");
	FragTrap	copyRoy(roy);

	lovely.rangedAttack("chair");
	lovely.meleeAttack("chair");
	lovely.takeDamage(60);
	lovely.takeDamage(60);
	lovely.beRepaired(20);

	roy.beRepaired(20);
	roy.vaulthunter_dot_exe("you");
	roy.vaulthunter_dot_exe("you");
	roy.vaulthunter_dot_exe("you");
	roy.vaulthunter_dot_exe("you");
	roy.vaulthunter_dot_exe("you");
}