/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 11:24:23 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/11 20:03:48 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

int main() {
	ClapTrap 	clapy;
	ClapTrap	roy("Roy");
	ClapTrap	copyRoy(roy);

	clapy.rangedAttack("chair");
	clapy.meleeAttack("chair");
	clapy.takeDamage(60);
	clapy.takeDamage(60);
	clapy.beRepaired(20);

	roy.beRepaired(20);

	std::cout << "------------" << std::endl;
	FragTrap 	fragy;
	FragTrap	winner("Winner");
	FragTrap	copyClapy(fragy);
	fragy.vaulthunter_dot_exe("you");
	fragy.vaulthunter_dot_exe("you");
	fragy.vaulthunter_dot_exe("you");
	fragy.vaulthunter_dot_exe("you");
	fragy.vaulthunter_dot_exe("you");

	winner.beRepaired(20);

	std::cout << "------------" << std::endl;
	ScavTrap 	scavy;
	ScavTrap	looser("Looser");
	ScavTrap	copyscavy(scavy);
	scavy.challengeNewcomer("you");
	scavy.challengeNewcomer("you");
	scavy.challengeNewcomer("you");
	scavy.challengeNewcomer("you");

}
