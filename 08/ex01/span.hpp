/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 15:54:59 by jwon              #+#    #+#             */
/*   Updated: 2021/01/30 16:32:39 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <vector>
# include <numeric>

class Span
{
	public:
		Span(unsigned int n);
		Span(Span const &ref);
		Span& operator=(Span const &ref);
		~Span();

		void				addNumber(int value);
		void				addNumber(int value, unsigned int start, unsigned end);
		unsigned int		shortestSpan();
		unsigned int		longestSpan();

		std::vector<int>	getVector();

		class NoSpanException : public std::exception
		{
			virtual const char* what() const throw();
		};
		class NoSpaceException : public std::exception
		{
			virtual const char* what() const throw();
		};

	private:
		Span();

		unsigned int		m_n;
		std::vector<int>	m_vec;
};

#endif