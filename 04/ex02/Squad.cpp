/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 19:36:36 by jwon              #+#    #+#             */
/*   Updated: 2021/01/26 19:54:00 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad():
	m_count(0),
	m_unit(NULL)
{
}

Squad::Squad(Squad const &ref):
	m_count(ref.m_count)
{
	if (ref.m_unit)
	{
		this->m_unit = new ISpaceMarine*[ref.m_count];
		for (int i = 0; i < ref.m_count; i++)
			this->m_unit[i] = ref.m_unit[i]->clone();
	}
	else
		this->m_unit = NULL;
}

Squad& Squad::operator=(Squad const &ref)
{
	if (this != &ref)
	{
		this->m_count = ref.m_count;
		for (int i = 0; i < this->m_count; i++)
			delete this->m_unit[i];
		delete[] this->m_unit;
		m_unit = new ISpaceMarine*[this->m_count];
		for (int i = 0; i < this->m_count; i++)
			this->m_unit[i] = ref.m_unit[i]->clone();
	}
	return (*this);
}

Squad::~Squad()
{
	if (m_unit)
	{
		for (int i = 0; i < m_count; i++)
			delete m_unit[i];
		delete[] m_unit;
	}
}

int				Squad::getCount() const
{
	return (m_count);
}

ISpaceMarine	*Squad::getUnit(int unit) const
{
	if (m_count > 0 && unit < m_count && unit >= 0)
		return (m_unit[unit]);
	return (NULL);
}

int				Squad::push(ISpaceMarine *unit)
{
	if (!unit)
		return (1);
	if (!m_unit)
	{
		m_unit = new ISpaceMarine*[1];
		m_unit[0] = unit;
		m_count = 1;
	}
	else
	{
		for (int i = 0 ; i < m_count ; i++)
		{
			if (m_unit[i] == unit)
				return (1);
		}
		ISpaceMarine **tmp = new ISpaceMarine*[m_count + 1];
		for (int i = 0 ; i < m_count ; i++)
			tmp[i] = m_unit[i];
		delete[] m_unit;
		tmp[m_count] = unit;
		m_unit = tmp;
		m_count++;
	}
	return (0);
}
