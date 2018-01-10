/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 22:49:22 by Ulliwy            #+#    #+#             */
/*   Updated: 2018/01/09 23:51:32 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_H
#define LOGGER_H

#include <fstream>

class Logger {
public:
	struct dest
	{
		std::string	dest_name;
		void		(Logger::*l)(std::string str);

	};

	dest 	destinations[2];

	Logger();
	Logger(std::string file_name);
	~Logger();
	void		log(std::string const &dest, std::string const &message);

private:
	void		logToConsole(std::string str);
	void		logToFile(std::string str);
	std::string	makeLogEntry(std::string msg) const;
	void		initDest();

	std::string		_file_name;
	std::ofstream	_ofs;
};

#endif
