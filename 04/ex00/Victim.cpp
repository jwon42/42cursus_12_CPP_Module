/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 03:43:38 by jwon              #+#    #+#             */
/*   Updated: 2021/01/26 22:21:42 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim()
{
	m_name = "Anonymous";
	std::cout << "Some random victim called "
		<< m_name << " just appeared!" << std::endl;
}

Victim::Victim(std::string const name):
	m_name(name)
{
	std::cout << "Some random victim called "
		<< m_name << " just appeared!" << std::endl;
}

Victim::Victim(Victim const &ref)
{
	*this = ref;
}

Victim&	Victim::operator=(Victim const &ref)
{
	if (this != &ref)
		m_name = ref.m_name;
	return (*this);
}

Victim::~Victim()
{
	std::cout << "Victim "
		<< m_name << " just died for no apparent reason!" << std::endl;
}


std::string	Victim::getName(void) const
{
	return (m_name);
}

void		Victim::getPolymorphed(void) const
{
	std::cout << m_name
		<< " has been turned into a cute little sheep!" << std::endl;
}

std::ostream& operator<<(std::ostream &os, const Victim &ref)
{
	os << "I'm " << ref.getName()
		<< ", and I like otters!" << std::endl;
	return (os);
}
