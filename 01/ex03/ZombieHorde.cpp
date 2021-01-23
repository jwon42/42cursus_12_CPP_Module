/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 11:27:22 by jwon              #+#    #+#             */
/*   Updated: 2020/11/28 13:23:19 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n, std::string type)
{
	std::string		name;

	this->_n = n;
	this->_type = type;
	_zombie = new Zombie[_n];
	for (int i = 0 ; i < _n ; i++)
	{
		usleep(1000000);
		name = randomNameGenerator();
		_zombie[i].setMember(_type, name);
		_zombie[i].announce();
	}
	std::cout << "\n## " << _n << " Zombies were born. ##" << std::endl;
}

std::string		ZombieHorde::randomNameGenerator(void)
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

ZombieHorde::~ZombieHorde()
{
	delete[] _zombie;
	std::cout << "\n## All zombies have been destroyed. ##" << std::endl;
}