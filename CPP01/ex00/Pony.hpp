/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 11:02:45 by timlecou          #+#    #+#             */
/*   Updated: 2020/11/27 19:35:12 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP
# include <iostream>
# include <string>

class	Pony
{
	public:
		Pony(std::string n, std::string c);
		~Pony();

		void	eat(std::string thing) const;
		void	run(int distance) const;
		void	sleep(int time) const;
	private:
		std::string		name;
		std::string		color;
};

#endif
