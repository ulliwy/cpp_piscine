/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 18:57:20 by Ulliwy            #+#    #+#             */
/*   Updated: 2018/01/16 11:30:15 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include <iostream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form {
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const &rfs);
	virtual ~ShrubberyCreationForm();

	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rfs);

	virtual void execute(Bureaucrat const & executor) const;
};

#endif
