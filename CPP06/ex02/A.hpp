/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 21:52:10 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/08 21:54:47 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
# define A_HPP
# include "Base.hpp"

class	A : public Base
{
	public:
		A() {}
		~A() {}
		A(const A &a);
		A&	operator=(const A &a);
};

#endif
