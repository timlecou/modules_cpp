/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 18:01:38 by timlecou          #+#    #+#             */
/*   Updated: 2020/11/29 14:56:55 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

class	Human
{
	public:
		Human();
		~Human();
		std::string	identify();
		Brain		&getBrain();
	private:
		Brain *cerv;
};
