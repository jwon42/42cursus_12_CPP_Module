/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 03:47:17 by jwon              #+#    #+#             */
/*   Updated: 2021/01/26 22:22:01 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon():
	Victim()
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(std::string const name):
	Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const &ref):
	Victim(ref)
{
	*this = ref;
}

Peon&	Peon::operator=(Peon const &ref)
{
	if (this == &ref)
		return (*this);
	m_name = ref.getName();
	std::cout << "Zog zog." << std::endl;
	return (*this);
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

void		Peon::getPolymorphed(void) const
{
	std::cout << getName()
		<< " was just polymorphed into a pink pony!" << std::endl;
}
