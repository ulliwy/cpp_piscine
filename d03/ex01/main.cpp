/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 11:24:23 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/11 16:32:19 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

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

	std::cout << "------------" << std::endl;

	ScavTrap 	scavy;
	ScavTrap	glory("Glory");

	glory.rangedAttack("wall");
	glory.meleeAttack("wall");
	glory.takeDamage(60);
	glory.takeDamage(60);
	glory.beRepaired(20);

	scavy.beRepaired(20);
	scavy.challengeNewcomer("him");
	scavy.challengeNewcomer("him");
	scavy.challengeNewcomer("him");
	scavy.challengeNewcomer("him");
	scavy.challengeNewcomer("him");

}
