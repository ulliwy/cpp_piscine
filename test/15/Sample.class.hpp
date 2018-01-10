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
	Sample(void);
	~Sample(void);

	void	bar(char const c) const;
	void	bar(int const n) const;
	void	bar(float const z) const;
	void	bar(Sample const &i) const;

	int c;
};

#endif