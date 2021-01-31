/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 15:54:57 by jwon              #+#    #+#             */
/*   Updated: 2021/01/31 15:33:17 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int n):
	m_n(n)
{
}

Span::Span(Span const &ref)
{
	*this = ref;
}

Span& Span::operator=(Span const &ref)
{
	if (this != &ref)
	{
		this->m_n = ref.m_n;
		this->m_vec = ref.m_vec;
	}
	return (*this);
}

Span::~Span()
{
	this->m_vec.clear();
}

void			Span::addNumber(int value)
{
	if (this->m_vec.size() >= this->m_n)
		throw Span::NoSpaceException();
	m_vec.push_back(value);
}

void			Span::addNumber(int value, unsigned int start, unsigned end)
{
	if ((end >= this->m_n) || (start >= end))
		throw Span::NoSpanException();
	if (end > this->m_vec.size())
		this->m_vec.resize(end);
	std::vector<int>::iterator	it = this->m_vec.begin() + start;
	std::fill(it, it + (end - start) + 1, value);
	// print vector (for test)
	// for (unsigned long i = 0; i < m_vec.size(); i++)
	// 	std::cout << m_vec[i] << " ";
}

unsigned int	Span::shortestSpan()
{
	if (m_vec.size() <= 1)
		throw Span::NoSpanException();
	unsigned int				ret;
	std::vector<int>			tmp;
	std::vector<int>			tmp_sort = this->m_vec;
	std::vector<int>::iterator	it;
	std::sort(tmp_sort.begin(), tmp_sort.end());
	for (it = tmp_sort.begin() + 1 ; it != tmp_sort.end() ; it++)
		tmp.push_back(*it - *(it - 1));
	ret = *(std::min_element(tmp.begin(), tmp.end()));
	tmp.clear();
	tmp_sort.clear();
	return (ret);
}

unsigned int	Span::longestSpan()
{
	if (m_vec.size() <= 1)
		throw Span::NoSpanException();
	unsigned int 				ret;
	std::vector<int>			tmp = this->m_vec;
	std::sort(tmp.begin(), tmp.end());
	ret = tmp.back() - tmp.front();
	tmp.clear();
	return (ret);
}

const char* Span::NoSpanException::what() const throw()
{
	return ("SpanException: No span.");
}

const char* Span::NoSpaceException::what() const throw()
{
	return ("SpanException: No space.");
}