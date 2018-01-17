/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 18:57:20 by Ulliwy            #+#    #+#             */
/*   Updated: 2018/01/16 11:30:19 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESEDENTIALPARDONFORM_H
#define PRESEDENTIALPARDONFORM_H

#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form {
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const &rfs);
	virtual ~PresidentialPardonForm();

	PresidentialPardonForm &operator=(PresidentialPardonForm const &rfs);

	virtual void execute(Bureaucrat const & executor) const;
};

#endif
