/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 22:19:23 by jwon              #+#    #+#             */
/*   Updated: 2021/01/30 14:36:32 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array():
	m_element(nullptr),
	m_n(0)
{
}

template <typename T>
Array<T>::Array(unsigned int n):
	m_element(new T[n]),
	m_n(n)
{
}

template <typename T>
Array<T>::Array(Array const &ref)
{
	*this = ref;
}

template <typename T>
Array<T>& Array<T>::operator=(Array const &ref)
{
	if (this != &ref)
	{
		T *temp = new T(ref.size());
		for (unsigned int i = 0 ; i < ref.size() ; i++)
			temp[i] = ref.m_element[i];
		delete []this->m_element;
		this->m_element = temp;
		this->m_n = ref.size();
	}
	return (*this);
}

template <typename T>
Array<T>::~Array()
{
	if (this->m_element)
		delete []this->m_element;
}

template <typename T>
T& Array<T>::operator[](unsigned int idx)
{
	if (idx < 0 || idx >= this->m_n)
		throw OutOfIndexException();
	return (this->m_element[idx]);
}

template <typename T>
const T& Array<T>::operator[](unsigned int idx) const
{
	if (idx < 0 || idx >= this->m_n)
		throw OutOfIndexException();
	return (this->m_element[idx]);
}

template <typename T>
unsigned int	Array<T>::size() const
{
	return (m_n);
}

template <typename T>
const char* 	Array<T>::OutOfIndexException::what() const throw()
{
	return ("ArrayException: Out of index");
}
