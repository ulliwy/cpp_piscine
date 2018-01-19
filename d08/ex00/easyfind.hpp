/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 11:44:02 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/18 20:18:23 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
typename T::iterator easyfind(T &arr, int i) throw(std::exception) {
	typename T::iterator it;

	it = std::find(std::begin(arr), std::end(arr), i);
	if (it == std::end(arr))
		throw (std::exception());
	return it;
}