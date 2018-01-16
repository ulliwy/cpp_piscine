/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 15:57:54 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/15 16:12:52 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

#include <iostream>

class Form {
public:
	Form();
	Form(std::string name, bool signed, int signGrade, int execGrade);
	Form(Form const &rfs);
	~Form();

	Form &operator=(Form const &rfs);

	class GradeTooHighException : public std::exception {
	public:
		GradeTooHighException();
		GradeTooHighException(GradeTooHighException const &rfs);
		virtual ~GradeTooHighException() throw();

		GradeTooHighException &operator=(GradeTooHighException const &rfs);
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		GradeTooLowException();
		GradeTooLowException(GradeTooLowException const &rfs);
		virtual ~GradeTooLowException() throw();

		GradeTooLowException &operator=(GradeTooLowException const &rfs);
		virtual const char* what() const throw();
	};

private:
	std:string const _name;
	bool _signed;
	int const _signGrade;
	int const _execGrade;
}

#endif
