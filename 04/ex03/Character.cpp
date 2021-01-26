/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 19:53:04 by jwon              #+#    #+#             */
/*   Updated: 2021/01/26 23:15:44 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name):
	m_name(name),
	m_nbmat(0)
{
	for (int i = 0 ; i < 4 ; i++)
		m_materia[i] = NULL;
}

Character::Character(Character const &ref):
	m_name(ref.m_name),
	m_nbmat(ref.m_nbmat)
{
	for (int i = 0 ; i < 4 ; i++)
	{
		if (ref.m_materia[i])
			m_materia[i] = ref.m_materia[i]->clone();
		else
			m_materia[i] = NULL;
	}
}

Character& Character::operator=(Character const &ref)
{
	if (this != &ref)
	{
		m_name = ref.m_name;
		m_nbmat = ref.m_nbmat;
		for (int i = 0 ; i < 4 ; i++)
		{
			if (ref.m_materia[i])
				m_materia[i] = ref.m_materia[i]->clone();
			else
				m_materia[i] = NULL;
		}
	}
	return (*this);
}

Character::~Character()
{
	for (int i = 0 ; i < 4 ; i++)
		delete m_materia[i];
}

std::string const	&Character::getName() const
{
	return (m_name);
}

void				Character::equip(AMateria *m)
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

void				Character::unequip(int idx)
	{
	if (idx >= 0 && idx < m_nbmat && m_materia[idx])
	{
		for (int i = idx ; i < 3 ; i++)
		{
			m_materia[i] = m_materia[i + 1];
			m_materia[i + 1] = NULL;
		}
		m_nbmat--;
	}
}

void				Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < m_nbmat && m_materia[idx])
		m_materia[idx]->use(target);
}
