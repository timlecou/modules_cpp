/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timlecou <timlecou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 15:33:17 by timlecou          #+#    #+#             */
/*   Updated: 2020/12/09 18:27:54 by timlecou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template<typename T>
class	Array
{
	public:
		Array(void)
		{
			this->_arr = new T[0];
			this->_size = 0;
		}

		Array(unsigned int n)
		{
			this->_arr = new T[n];
			this->_size = n;
			for (unsigned int i = 0; i < n; i++)
				this->_arr[i] = T();
		}

		Array(const Array &a)
		{
			this->_arr = new T[a._size];
			for (int i = 0; i < a._size; i++)
			{
				this->_arr[i] = a._arr[i];
			}
			this->_size = a._size;
		}

		~Array(void)
		{
			delete[] this->_arr;
		}

		Array &operator=(const Array &a)
		{
			this->_arr = new T*[a._size];
			this->_size = a._size;
			for (int i = 0; i < a._size; i++)
			{
				this->_arr[i] = a._arr[i];
			}
			return (*this);
		}

		class	OutOfRangeException : public std::exception
		{
			const char *what() const throw()
			{
				return ("index is out of range");
			}
		};

		int		size(void)
		{
			return (this->_size);
		}

		T&	operator[](int n)
		{
			if (n > this->_size || n < 0)
				throw OutOfRangeException();
			return (this->_arr[n]);
		}
	private:
		T	*_arr;
		int	_size;
};

#endif
