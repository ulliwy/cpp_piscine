/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 11:24:23 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/11 22:30:41 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
#include <iostream>

int main() {
	ClapTrap 	clapy;
	// ClapTrap	roy("Roy");
	// ClapTrap	copyRoy(roy);

	// clapy.rangedAttack("chair");
	// clapy.meleeAttack("chair");
	// clapy.takeDamage(60);
	// clapy.takeDamage(60);
	// clapy.beRepaired(20);

	// roy.beRepaired(20);

	std::cout << "------------" << std::endl;
	FragTrap 	fragy;
	// FragTrap	winner("Winner");
	// FragTrap	copyClapy(fragy);
	// fragy.vaulthunter_dot_exe("you");
	// fragy.vaulthunter_dot_exe("you");
	// fragy.vaulthunter_dot_exe("you");
	// fragy.vaulthunter_dot_exe("you");
	// fragy.vaulthunter_dot_exe("you");

	// winner.beRepaired(20);

	std::cout << "------------" << std::endl;
	ScavTrap 	scavy;
	// ScavTrap	looser("Looser");
	// ScavTrap	copyscavy(scavy);
	// scavy.challengeNewcomer("you");
	// scavy.challengeNewcomer("you");
	// scavy.challengeNewcomer("you");
	// scavy.challengeNewcomer("you");

	std::cout << "------------" << std::endl;
	NinjaTrap	ninjy;
	NinjaTrap	nu("Nu");

	ninjy.meleeAttack("chair");
	// ninjy.ninjaShoebox(clapy);
	// ninjy.ninjaShoebox(scavy);
	// ninjy.ninjaShoebox(fragy);
	// ninjy.ninjaShoebox(nu);

	std::cout << "------------" << std::endl;
	SuperTrap suppy;
	suppy.rangedAttack("rock");
	suppy.meleeAttack("rock");
	suppy.takeDamage(60);
	suppy.takeDamage(60);
	suppy.beRepaired(20);
	suppy.ninjaShoebox(clapy);
	suppy.vaulthunter_dot_exe("you");

	std::cout << "------------" << std::endl;
}
