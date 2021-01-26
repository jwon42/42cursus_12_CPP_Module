/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 17:17:41 by jwon              #+#    #+#             */
/*   Updated: 2021/01/26 22:32:56 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string const name, std::string const title):
	m_name(name),
	m_title(title)
{
	std::cout << m_name << ", "
		<< m_title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &ref)
{
	*this = ref;
}

Sorcerer&	Sorcerer::operator=(Sorcerer const &ref)
{
    if (this == &ref)
        return (*this);
    m_name = ref.getName();
    m_title = ref.getTitle();
    std::cout << m_name << ", "
		<< m_title << ", is born!" << std::endl;
    return (*this);
}

Sorcerer::~Sorcerer()
{
	std::cout << m_name << ", "
		<< m_title << ", is dead. Consequences will never be the same!" << std::endl;
}

std::string		Sorcerer::getName(void) const
{
	return (m_name);
}

std::string		Sorcerer::getTitle(void) const
{
	return (m_title);
}

void			Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}

std::ostream	&operator<<(std::ostream &os, Sorcerer const &ref)
{
	os << "I am " << ref.getName() << ", "
		<< ref.getTitle() << ", and I like ponies!" << std::endl;
	return (os);
}
