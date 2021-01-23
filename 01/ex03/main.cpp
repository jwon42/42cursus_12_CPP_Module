/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 11:32:15 by jwon              #+#    #+#             */
/*   Updated: 2020/11/28 13:24:06 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

std::string		zombieTypePicker(int idx)
{
	std::string		type;
	std::string		types[10] = {
		"walker", "runner", "ghoul", "crawler", "screamer",
		"bonie", "puker", "stalker", "splitter", "exploder"};
	
	srand(time(NULL));
	if (idx == 42)
		type = types[rand() % 10];
	else
		type = types[idx - 1];
	std::cout << "\n## Zombie type is <" << type << "> ##" << std::endl;
	std::cout << std::endl;
	return (type);
}

int				zombieTypeInput(void)
{
	int			input;
	bool		loop;

	std::cout << "┌────────────────────── Type of zombies ─────────────────────────┐" << std::endl;
	std::cout << "│  1. walker   2. runner   3. ghoul    4. crawler  5. screamer   │" << std::endl;
	std::cout << "│  6. bonie    7. puker    8. stalker  9. splitter 10. exploder  │" << std::endl;
	std::cout << "│  * If you enter \'42\', the type is randomly defined.            │" << std::endl;
	std::cout << "└────────────────────────────────────────────────────────────────┘" << std::endl;
	loop = true;
	while (loop)
	{
		std::cout << ">> Please choose the type of zombie : ";
		std::cin >> input;
		if (std::cin.fail())
		{
			std::cout << "* Error: Invalid value." << std::endl;
			std::cin.clear();
			std::cin.ignore(256, '\n');
			continue ;
		}
		if (std::cin.eof())
			return (0);
		if (input == 42 || (input >= 1 && input <= 10))
			loop = false;
		else
			std::cout << "* Error: Input value is out of range." << std::endl;
	}
	return (input);
}

void			makeZombie(std::string type)
{
	int				num;

	std::cout << ">> How many zombies do you need? : ";
	std::cin >> num;
	if (std::cin.fail())
	{
		std::cout << "* Error: Invalid value." << std::endl;
		std::cin.clear();
		std::cin.ignore(256, '\n');
		return (makeZombie(type));
	}
	if (std::cin.eof())
		return ;
	ZombieHorde(num, type);
}

int				main(void)
{
	int				idx;
	std::string 	type;
	
	if (!(idx = zombieTypeInput()))
		return (-1);
	type = zombieTypePicker(idx);
	makeZombie(type);
	return (0);
}