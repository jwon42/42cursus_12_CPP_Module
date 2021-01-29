/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Awesome.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 20:53:02 by jwon              #+#    #+#             */
/*   Updated: 2021/01/29 20:54:50 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWESOME_HPP
# define AWESOME_HPP

# include <iostream>
# include <string>

class Awesome
{
	public:
		Awesome(): m_n(42) {return ;}
		int	get() const { return (this->m_n); }

	private:
		int	m_n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
	o << rhs.get();
	return (o);
}

template< typename T >
void print( T const & x )
{
	std::cout << x << std::endl;
	return ;
}

#endif