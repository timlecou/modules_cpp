/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 21:52:10 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/08 21:57:11 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
# define C_HPP
# include "Base.hpp"

class	C : public Base
{
	public:
		C() {}
		~C() {}
		C(const C &c);
		C&	operator=(const C &c);
};

#endif
