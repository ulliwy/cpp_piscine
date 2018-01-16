/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 15:57:54 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/15 16:11:55 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Form"), _signed(0), _signGrade(150), _execGrade(150) {
}

Form::Form(std::string name, bool signed, int signGrade, int execGrade) 
	: _name(name),
	  _signed(signed),
	  _signGrade(signGrade),
	  _execGrade(execGrade) {

}
	
Form::Form(Form const &rfs) {
	*this = rfs;
}

Form::~Form() {
}

Form &Form::operator=(Form const &rfs) {
	_name = rfs._name;
	_signed = rfs._signed;
	_signGrade = rfs._signGrade;
	_execGrade = rfs._execGrade;
}
