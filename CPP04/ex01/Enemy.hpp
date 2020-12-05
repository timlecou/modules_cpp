/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 10:16:18 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/04 13:54:09 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP
# include <iostream>

class	Enemy
{
	public:
		Enemy(int hp, std::string const &type);
		Enemy(Enemy &en);
		virtual ~Enemy(void);
		Enemy&	operator=(const Enemy &en);

		std::string		getType(void) const;
		int				getHP(void) const;
		void			setType(std::string type);
		void			setHP(int hp);
		bool			isAlive(void) const;

		virtual	void	takeDamage(int);
	private:
		std::string		_type;
		int				_hp;
		bool			_alive;
};

#endif
