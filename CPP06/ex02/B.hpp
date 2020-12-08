/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 21:52:10 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/08 21:56:41 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
# define B_HPP
# include "Base.hpp"

class	B : public Base
{
	public:
		B() {}
		~B() {}
		B(const B &b);
		B&	operator=(const B &b);
};

#endif
