/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 21:02:04 by Ulliwy            #+#    #+#             */
/*   Updated: 2018/01/15 22:09:57 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock() : _intrn(NULL), _sign(NULL), _exec(NULL) {
}

OfficeBlock::OfficeBlock(Intern &intrn, Bureaucrat &sign, Bureaucrat &exec)
	: _intrn(&intrn),
	  _sign(&sign),
	  _exec(&exec) {
}

OfficeBlock::~OfficeBlock() {
}

void OfficeBlock::setIntern(Intern &intrn) {
	_intrn = &intrn;
}

void OfficeBlock::setSign(Bureaucrat &sign) {
	_sign = &sign;
}

void OfficeBlock::setExec(Bureaucrat &exec) {
	_exec = &exec;
}

void OfficeBlock::doBureaucracy(std::string name, std::string target) {
	if (!_intrn) {
		throw OfficeBlock::NoInternException();
		return;
	} else if (!_sign || !_exec) {
		throw OfficeBlock::NotEnoughBureaucrats();
		return;
	}
	Form *newForm = _intrn->makeForm(name, target);
	if (!newForm) {
		throw OfficeBlock::UnknownFormException();
		return;
	}

	if (_sign->getGrade() > newForm->getSignGrade()) {
		throw OfficeBlock::LowSignGradeException();
		return;
	}
	_sign->signForm(*newForm);

	if (_exec->getGrade() > newForm->getExecGrade()) {
		throw OfficeBlock::LowExecGradeException();
		return;
	}
	_exec->executeForm(*newForm);
	std::cout << "Bureaucracy went right!" << std::endl;

}

// NoInternException
OfficeBlock::NoInternException::NoInternException() {
}

OfficeBlock::NoInternException::NoInternException(NoInternException const &rfs) {
	*this = rfs;
}

OfficeBlock::NoInternException &OfficeBlock::NoInternException::operator=(NoInternException const &rfs) {
	(void)rfs;
	return *this;
}

OfficeBlock::NoInternException::~NoInternException() throw() {
}
		
const char* OfficeBlock::NoInternException::what() const throw() {
	return ("No intern.");
}

// NotEnoughBureaucrats
OfficeBlock::NotEnoughBureaucrats::NotEnoughBureaucrats() {
}

OfficeBlock::NotEnoughBureaucrats::NotEnoughBureaucrats(NotEnoughBureaucrats const &rfs) {
	*this = rfs;
}

OfficeBlock::NotEnoughBureaucrats &OfficeBlock::NotEnoughBureaucrats::operator=(NotEnoughBureaucrats const &rfs) {
	(void)rfs;
	return *this;
}

OfficeBlock::NotEnoughBureaucrats::~NotEnoughBureaucrats() throw() {
}
		
const char* OfficeBlock::NotEnoughBureaucrats::what() const throw() {
	return ("Not enough bureaucrats!");
}

// LowSignGradeException
OfficeBlock::LowSignGradeException::LowSignGradeException() {
}

OfficeBlock::LowSignGradeException::LowSignGradeException(LowSignGradeException const &rfs) {
	*this = rfs;
}

OfficeBlock::LowSignGradeException &OfficeBlock::LowSignGradeException::operator=(LowSignGradeException const &rfs) {
	(void)rfs;
	return *this;
}

OfficeBlock::LowSignGradeException::~LowSignGradeException() throw() {
}
		
const char* OfficeBlock::LowSignGradeException::what() const throw() {
	return ("Bureaucrat grade is too low to sign the form.");
}

// LowExecGradeException
OfficeBlock::LowExecGradeException::LowExecGradeException() {
}

OfficeBlock::LowExecGradeException::LowExecGradeException(LowExecGradeException const &rfs) {
	*this = rfs;
}

OfficeBlock::LowExecGradeException &OfficeBlock::LowExecGradeException::operator=(LowExecGradeException const &rfs) {
	(void)rfs;
	return *this;
}

OfficeBlock::LowExecGradeException::~LowExecGradeException() throw() {
}
		
const char* OfficeBlock::LowExecGradeException::what() const throw() {
	return ("Bureaucrat grade is too low to execute the form.");
}

// UnknownFormException
OfficeBlock::UnknownFormException::UnknownFormException() {
}

OfficeBlock::UnknownFormException::UnknownFormException(UnknownFormException const &rfs) {
	*this = rfs;
}

OfficeBlock::UnknownFormException &OfficeBlock::UnknownFormException::operator=(UnknownFormException const &rfs) {
	(void)rfs;
	return *this;
}

OfficeBlock::UnknownFormException::~UnknownFormException() throw() {
}
		
const char* OfficeBlock::UnknownFormException::what() const throw() {
	return ("Unknown form can't be bureaucrated.");
}

