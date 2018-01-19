/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 11:44:02 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/18 12:19:59 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
typename T::iterator easyfind(T &arr, int i) throw(std::exception) {
	typename T::iterator it;

	for (it = arr.begin(); it != arr.end(); ++it) {
		if (*it == i) 
			return it;
	}
	throw (std::exception());
}