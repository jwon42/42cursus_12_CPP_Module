/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Awesome.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 18:12:44 by jwon              #+#    #+#             */
/*   Updated: 2021/01/29 18:19:50 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWESOME_HPP
# define AWESOME_HPP

class Awesome
{
	public:
		Awesome() : m_n(0){}
		Awesome(int n): m_n(n){}
		bool operator==( Awesome const & rhs ) { return (this->m_n == rhs.m_n); }
		bool operator!=( Awesome const & rhs ) { return (this->m_n != rhs.m_n); }
		bool operator>( Awesome const & rhs ) { return (this->m_n > rhs.m_n); }
		bool operator<( Awesome const & rhs ) { return (this->m_n < rhs.m_n); }
		bool operator>=( Awesome const & rhs ) { return (this->m_n >= rhs.m_n); }
		bool operator<=( Awesome const & rhs ) { return (this->m_n <= rhs.m_n); }
		int  getN() {return(m_n);}

	private:
		int m_n;
};

#endif