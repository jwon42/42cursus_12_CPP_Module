/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eashfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 15:39:03 by jwon              #+#    #+#             */
/*   Updated: 2021/01/31 15:39:44 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <iterator>
# include <vector>

class NotFoundException: public std::exception
{
	public:
		virtual const char *what() const throw()
		{
			return ("Error: Not found");
		};
};

template <typename T>
void	easyfind(T &container, int n)
{
	typename T::iterator it;

	it = find(container.begin(), container.end(), n);
	if (it == container.end())
		throw NotFoundException();
	std::cout << "Element " << n
		<< " at position " << distance(container.begin(), it) << std::endl;
}

#endif