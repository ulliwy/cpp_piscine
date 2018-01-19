/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ulliwy <Ulliwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 13:58:27 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/18 20:57:38 by Ulliwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <list>
#include <iterator>
#include <stack>

template<typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {
public:
	typedef typename std::stack<T, Container>::container_type::iterator iterator;
	
	MutantStack() {
	}

	MutantStack(MutantStack const &rfs) : std::stack<T, Container>(rfs) {
	}
	
	~MutantStack(void) {
	}
	
	MutantStack &operator=(MutantStack const &rfs) {
		this->c = rfs.c;
		return *this;
	};

	iterator	begin() {
		return std::stack<T, Container>::c.begin();
	}

	iterator	end() {
		return std::stack<T, Container>::c.end();
	}
};