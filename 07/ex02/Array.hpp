/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 21:33:55 by jwon              #+#    #+#             */
/*   Updated: 2021/01/31 14:40:04 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template <typename T>
class Array
{
	public:
		Array();
		Array(unsigned int n);
		Array(Array const &ref);
		Array& operator=(Array const &ref);
		virtual ~Array();

		T& operator[](unsigned int idx);
		const T& operator[](unsigned int idx) const;

		unsigned int	size() const;

	private:
		T				*m_element;
		unsigned int	m_n;
};

# include "Array.cpp"

#endif