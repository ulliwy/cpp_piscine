/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 12:35:15 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/09 13:03:53 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Pony {
public:
	Pony(std::string name, std::string color);
	~Pony();

	void	sayName() const;

private:
	std::string	_name;
	std::string	_color;
};