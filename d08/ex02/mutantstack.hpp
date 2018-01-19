/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 13:58:27 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/18 15:46:42 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <list>
#include <iterator>
#include <stack>

template<typename T>
class MutantStack {
public:
	MutantStack<T>() : std::stack<T> {
	}
	MutantStack(MutantStack const &rfs) {
		_st = rfs._st;
	}
	~MutantStack() {
	}

	MutantStack &operator=(MutantStack const&rfs) {
		_st = rfs._st;
		return *this;
	}

	bool empty() const {
		return (_st.empty());
	}

	ssize_t size() const {
		return (_st.size());
	}

	T &top() const {
		return (_st.front());
	}

	void push(T element) {
		_st.push_front(element);
	}

	void pop() {
		_st.pop_front();
	}

	std::iterator begin() const {
		return (_st.begin());
	}

	iterator end() const {
		return (_st.end());
	}

private:
	std::list<T> _st;
};