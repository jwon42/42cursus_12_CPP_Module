/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 17:54:54 by jwon              #+#    #+#             */
/*   Updated: 2021/01/26 20:20:08 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion():
	Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &ref):
	Enemy(ref)
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion& RadScorpion::operator=(RadScorpion const &ref)
{
	if (this != &ref)
	{
		m_hp = ref.m_hp;
		m_type = ref.m_type;
	}
	return (*this);
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}
