/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 20:06:09 by jwon              #+#    #+#             */
/*   Updated: 2021/01/26 20:11:05 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource():
	m_nbmat(0)
{
	for (int i = 0 ; i < 4 ; i++)
		m_materia[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &ref)
{
	*this = ref;
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &ref)
{
	m_nbmat = ref.m_nbmat;
	for (int i = 0 ; i < 4 ; i++)
	{
		if (ref.m_materia[i])
			m_materia[i] = ref.m_materia[i]->clone();
		else
			m_materia[i] = NULL;
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0 ; i < 4 ; i++)
		delete m_materia[i];
}

void		MateriaSource::learnMateria(AMateria *m)
{
	if (m_nbmat < 4 && m)
	{
		for (int i = 0 ; i < m_nbmat ; i++)
		{
			if (m_materia[i] == m)
				return ;
		}
		m_materia[m_nbmat] = m;
		m_nbmat++;
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0 ; i < 4 ; i++)
	{
		if (m_materia[i] && m_materia[i]->getType() == type)
			return (m_materia[i]->clone());
	}
	return (NULL);
}
