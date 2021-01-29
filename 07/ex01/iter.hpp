/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 20:15:20 by jwon              #+#    #+#             */
/*   Updated: 2021/01/29 20:53:00 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template <typename T>
void	func(T const &a)
{
	std::cout << "Hello, " << a << std::endl;
}

template <typename T>
void 	iter(T *array, int len, void (*f)(T const &ref))
{
	for (int i = 0 ; i < len ; i++)
		f(array[i]);
}

#endif