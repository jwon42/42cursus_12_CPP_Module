/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 19:59:03 by jwon              #+#    #+#             */
/*   Updated: 2021/01/26 20:12:53 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure():
	AMateria("cure")
{
}

Cure::Cure(Cure const &ref):
	AMateria("cure")
{
	*this = ref;
}

Cure& Cure::operator=(Cure const &ref)
{
	if (this == &ref)
		return (*this);
	m_xp = ref.getXP();
	m_type = ref.getType();
	return (*this);
}

Cure::~Cure()
{
}


AMateria	*Cure::clone() const
{
	Cure *copy = new Cure(*this);
	return (copy);
}

void		Cure::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* heals "
		<< target.getName() << "'s wounds *" << std::endl;
}
