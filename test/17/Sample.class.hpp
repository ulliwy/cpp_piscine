/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 11:50:17 by iprokofy          #+#    #+#             */
/*   Updated: 2018/01/08 11:51:26 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class	Sample {

public:
	Sample(void);				//canonical
	Sample(int const n);
	Sample(Sample const &src);	//canonical
	~Sample(void);				//canonical

	Sample 	&operator=(Sample const &rfs);	//canonical

	int		getFoo(void) const;

private:
	int 	_foo;
};

std::ostream 	&operator<<(std::ostream &o, Sample const &rfs);

#endif