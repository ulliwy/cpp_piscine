/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 15:57:54 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/16 11:22:40 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name("Form"), _signed(false), _signGrade(150), _execGrade(150) {
}

Form::Form(std::string name, int signGrade, int execGrade) 
	: _name(name),
	  _signed(false),
	  _signGrade(signGrade),
	  _execGrade(execGrade) {
	if (signGrade < 1 || execGrade < 1)
		throw Form::GradeTooHighException();
	else if (signGrade > 150 || execGrade > 150)
		throw Form::GradeTooLowException();
}
	
Form::Form(Form const &rfs)
	: _name(rfs.getName()),
	  _signGrade(rfs.getSignGrade()),
	  _execGrade(rfs.getExecGrade()) {
	*this = rfs;
}

Form::~Form() {
}

Form &Form::operator=(Form const &rfs) {
	_signed = rfs._signed;
	return *this;
}

std::string Form::getName() const {
	return _name;
}

bool Form::getSigned() const {
	return _signed;
}

int Form::getSignGrade() const {
	return _signGrade;
}

int Form::getExecGrade() const {
	return _execGrade;
}

void Form::beSigned(Bureaucrat const &bure) {
	if (bure.getGrade() <= _signGrade)
		_signed = 1;
	else
		throw GradeTooLowException();
}

// too low
Form::GradeTooLowException::GradeTooLowException() {
}

Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const &rfs) {
	*this = rfs;
}

Form::GradeTooLowException &Form::GradeTooLowException::operator=(GradeTooLowException const &rfs) {
	(void)rfs;
	return *this;
}

Form::GradeTooLowException::~GradeTooLowException() throw() {
}
		
const char* Form::GradeTooLowException::what() const throw() {
	return ("Grade is too low");
}

// too high :)
Form::GradeTooHighException::GradeTooHighException() {
}

Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const &rfs) {
	*this = rfs;
}

Form::GradeTooHighException &Form::GradeTooHighException::operator=(GradeTooHighException const &rfs) {
	(void)rfs;
	return *this;
}

Form::GradeTooHighException::~GradeTooHighException() throw() {
}
		
const char* Form::GradeTooHighException::what() const throw() {
	return ("Grade is too high");
}

std::ostream &operator<<(std::ostream &o, Form const &rfs) {
	o << "Form name: <" << rfs.getName() << ">, is signed: <" << rfs.getSigned()
		<< ">, grade to sign in: " << rfs.getSignGrade() << ", grade to execute: "
		<< rfs.getExecGrade() << std::endl;
	return o;
}
