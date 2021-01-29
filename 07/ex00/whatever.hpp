/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 17:17:08 by jwon              #+#    #+#             */
/*   Updated: 2021/01/29 17:34:24 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <string>

template <typename T>
void	swap(T &a, T &b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T		&min(T &a, T &b)
{
	if (a >= b)
		return (b);
	else
		return (a);
}

template <typename T>
T		&max(T &a, T &b)
{
	if (a <= b)
		return (b);
	else
		return (a);
}

#endif