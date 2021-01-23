/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 14:54:43 by jwon              #+#    #+#             */
/*   Updated: 2020/11/27 18:59:34 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
}

void			ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

Zombie			*ZombieEvent::newZombie(std::string name)
{
	Zombie			*zombie;

	zombie = new Zombie(this->_type, name);
	return (zombie);
}

std::string		ZombieEvent::randomNameGenerator(void)
{
	int					len;
	std::string			name;
	static const char	vowelChar[] = "aeiou";
	static const char	consonantChar[] = "bcdfghjklmnpqrstvwxz";

	srand(time(NULL));
	len = rand() % 10 + 3;
	for (int i = 0 ; i < len ; i++)
	{
		if (i % 2 == 0)
			name += consonantChar[rand() % (sizeof(consonantChar) - 1)];
		else
			name += vowelChar[rand() % (sizeof(vowelChar) - 1)];
	}
	return (name);
}

void			ZombieEvent::randomChump()
{
	std::string		name;
	Zombie			*zombie;

	name = randomNameGenerator();
	zombie = newZombie(name);
	delete(zombie);
}

ZombieEvent::~ZombieEvent()
{
}