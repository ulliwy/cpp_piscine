/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 12:35:35 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/15 20:31:14 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <exception>

class Form;

class Bureaucrat {
public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const &rfs);
	virtual ~Bureaucrat();

	Bureaucrat &operator=(Bureaucrat const &rfs);
	void operator++(int);
	void operator--(int);
	std::string getName() const;
	int getGrade() const;
	void signForm(Form &fm);
	void executeForm(Form const & form);

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
	std::string const _name;
	int _grade;
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rfs);

#endif
