/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 22:49:22 by Ulliwy            #+#    #+#             */
/*   Updated: 2018/01/09 23:53:57 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int main() {
	Logger lg;

	lg.log("console", "hello");
	lg.log("console", "logging to console");
	lg.log("file", "hello");
	lg.log("file", "logging to file");
	lg.log("cmd", "no logging");
}