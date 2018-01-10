/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 22:02:31 by Ulliwy            #+#    #+#             */
/*   Updated: 2018/01/09 22:33:47 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H

#include <utility>
#include <iostream>

class Human {
private:
	struct fun {
		std::string		action_name;
		void			(Human::*f)(std::string const &target);
	};

	fun	actions[3];

	void meleeAttack(std::string const &target);
	void rangedAttack(std::string const &target);
	void intimidatingShout(std::string const &target);

public:
	Human();

	void action(std::string const &action_name, std::string const &target);
};

#endif