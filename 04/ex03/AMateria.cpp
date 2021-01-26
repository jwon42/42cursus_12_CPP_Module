/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 19:46:52 by jwon              #+#    #+#             */
/*   Updated: 2021/01/26 20:13:38 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type):
	m_xp(0),
	m_type(type)
{
}

AMateria::AMateria(AMateria const &ref)
{
	*this = ref;
}

AMateria& AMateria::operator=(AMateria const &ref)
{
	if (this == &ref)
		return (*this);
	m_xp = ref.m_xp;
	m_type = ref.m_type;
	return (*this);
}

AMateria::~AMateria()
{
}

std::string const	&AMateria::getType() const
{
	return (m_type);
}

unsigned int		AMateria::getXP() const
{
	return (m_xp);
}

void				AMateria::use(ICharacter &target)
{
	(void)target;
	m_xp += 10;
}
