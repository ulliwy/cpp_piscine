/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 12:35:35 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/16 11:22:37 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() : _name("Barry"), _grade(150) {
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150) {
		throw Bureaucrat::GradeTooLowException();
	}
	else
		_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &rfs) {
	*this = rfs;
}

Bureaucrat::~Bureaucrat() {
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rfs) {
	//_name = rfs._name;
	_grade = rfs._grade;
	(void)rfs;
	return *this;
}

void Bureaucrat::operator++(int) {
	if (_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
}
void Bureaucrat::operator--(int) {
	if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}

std::string Bureaucrat::getName() const {
	return _name;
}

int Bureaucrat::getGrade() const {
	return _grade;
}

void Bureaucrat::signForm(Form &fm) {
	if (_grade > fm.getSignGrade()) {
		std::cout << _name << " cannot sign form " << fm.getName() << " because grade is too low." << std::endl;
	} else if (fm.getSigned()) {
		std::cout << _name << " cannot sign form " << fm.getName() << " because form is already signed." << std::endl;
	} else {
		fm.beSigned(*this);
		std::cout << _name << " signs form " << fm.getName() << std::endl;
	}
}

// too low
Bureaucrat::GradeTooLowException::GradeTooLowException() {
}

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const &rfs) {
	*this = rfs;
}

Bureaucrat::GradeTooLowException &Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const &rfs) {
	(void)rfs;
	return *this;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {
}
		
const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade is too low");
}

// too high :)
Bureaucrat::GradeTooHighException::GradeTooHighException() {
}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const &rfs) {
	*this = rfs;
}

Bureaucrat::GradeTooHighException &Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const &rfs) {
	(void)rfs;
	return *this;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {
}
		
const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade is too high");
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rfs) {
	o << "<" << rfs.getName() << ">, bureaucrat grade <" << rfs.getGrade() << ">" << std::endl;
	return o;
}
