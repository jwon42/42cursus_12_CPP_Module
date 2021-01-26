/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 19:39:48 by jwon              #+#    #+#             */
/*   Updated: 2021/01/26 19:42:13 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
    std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const &ref)
{
	*this = ref;
    std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine& TacticalMarine::operator=(TacticalMarine const &ref)
{
	if (this == &ref)
		return (*this);
	return (*this);
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh ..." << std::endl;
}

ISpaceMarine	*TacticalMarine::clone() const
{
	TacticalMarine	*copy = new TacticalMarine(*this);
	return (copy);
}

void			TacticalMarine::battleCry() const
{
	std::cout << "For the Holy PLOT!" << std::endl;
}

void			TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void			TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}
