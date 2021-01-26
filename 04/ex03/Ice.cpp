/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 20:03:11 by jwon              #+#    #+#             */
/*   Updated: 2021/01/26 20:13:05 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice():
	AMateria("ice")
{
}

Ice::Ice(Ice const &ref):
	AMateria("ice")
{
	*this = ref;
}

Ice& Ice::operator=(Ice const &ref)
{
	if (this == &ref)
		return (*this);
	m_xp = ref.getXP();
	m_type = ref.getType();
	return (*this);
}

Ice::~Ice()
{
}

AMateria	*Ice::clone() const
{
	Ice *copy = new Ice(*this);
	return (copy);
}

void		Ice::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at "
		<< target.getName() << " *" << std::endl;
}
