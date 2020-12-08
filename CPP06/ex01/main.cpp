/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 18:52:22 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/08 21:45:47 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct	Data {std::string	s1; int	nb; std::string	s2; };

void	*serialize(void)
{
	Data	*data = new Data();
	char	ran[54] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\0";
	for (int i = 0; i < 8; i++)
	{
		int	nb = rand() % 51;
		data->s1.push_back(ran[nb]);
	}
	data->nb = rand() % 9;
	for (int j = 0; j < 8; j++)
	{
		int	nb = rand() % 51;
		data->s2.push_back(ran[nb]);
	}
	std::cout << "---------------Serialized-------------------" << std::endl;
	std::cout << data->s1 << std::endl;
	std::cout << data->nb << std::endl;
	std::cout << data->s2 << std::endl;
	return (reinterpret_cast<void*>(data));
}

Data*	deserialize(void *raw)
{
	std::cout << "address of the structure : " << raw << std::endl;
	Data	*data = reinterpret_cast<Data*>(raw);
	return (data);
}

int		main(void)
{
	srand(time(0));
	Data	*ret = deserialize(serialize());
	std::cout << "-------------Deserialized-------------------" << std::endl;
	std::cout << ret->s1 << std::endl;
	std::cout << ret->nb << std::endl;
	std::cout << ret->s2 << std::endl;

	return (0);
}
