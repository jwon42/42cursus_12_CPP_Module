/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 19:31:18 by jwon              #+#    #+#             */
/*   Updated: 2021/01/26 19:33:40 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &ref)
{
	*this = ref;
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator& AssaultTerminator::operator=(AssaultTerminator const &ref)
{
	if (this == &ref)
		return (*this);
	return (*this);
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I'll be back..." << std::endl;
}

ISpaceMarine		*AssaultTerminator::clone() const
{
	AssaultTerminator	*copy = new AssaultTerminator(*this);
	return (copy);
}

void				AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void				AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}

void				AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}
