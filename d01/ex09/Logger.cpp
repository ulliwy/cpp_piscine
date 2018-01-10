/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 22:49:22 by Ulliwy            #+#    #+#             */
/*   Updated: 2018/01/09 23:52:48 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"
#include <ctime>
#include <iostream>
#include <sstream>
#include <iomanip>

Logger::Logger() : _file_name("logs"), _ofs(_file_name) {
	initDest();
}

Logger::Logger(std::string file_name) : _file_name(file_name), _ofs(_file_name) {
	initDest();
}

Logger::~Logger() {
	_ofs.close();
}

void	Logger::initDest() {
	destinations[0].dest_name = "console";
	destinations[0].l = &Logger::logToConsole;
	destinations[1].dest_name = "file";
	destinations[1].l = &Logger::logToFile;
}

std::string	Logger::makeLogEntry(std::string msg) const {
	std::stringstream out;
	std::time_t	t;
	std::tm		*gmt;

	t = std::time(NULL);
	gmt = std::gmtime(&t);
	out << "[" << gmt->tm_year + 1900;
	out << std::setfill('0') << std::setw(2) << gmt->tm_mon + 1;
	out << std::setfill('0') << std::setw(2) << gmt->tm_mday << "_";
	out << std::setfill('0') << std::setw(2) << gmt->tm_hour;
	out << std::setfill('0') << std::setw(2) << gmt->tm_min;
	out << std::setfill('0') << std::setw(2) << gmt->tm_sec << "] ";
	out << msg << std::endl;
	return (out.str());
}

void		Logger::logToConsole(std::string str) {
	std::cout << (this->makeLogEntry)(str);
}

void		Logger::log(std::string const &dest, std::string const &message) {
	for (int i = 0; i < 2; i++) {
		if (dest == destinations[i].dest_name) {
			(this->*(destinations[i].l))(message);
			return;
		}
	}
	std::cout << "No such destination." << std::endl;
}

void		Logger::logToFile(std::string str) {
	_ofs << (this->makeLogEntry)(str);
}