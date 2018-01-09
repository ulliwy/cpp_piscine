/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 11:50:17 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/08 11:51:26 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

class Contact {
public:
	std::string		firstName;
	std::string		lastName;
	std::string		nickname;
	std::string		login;
	std::string		postalAddress;
	std::string		email;
	std::string		phone;
	std::string		birthday;
	std::string		favMeal;
	std::string		underColor;
	std::string		darkSecret;

	Contact(void);
	~Contact(void);

	void		print(int index) const;
	void		print_info() const;

private:
	std::string	_trunc(std::string name) const;
};

#endif