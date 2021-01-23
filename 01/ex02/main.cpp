/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 19:05:54 by jwon              #+#    #+#             */
/*   Updated: 2020/11/29 12:27:00 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

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

	std::cout << "\n┌────────────────────── Type of zombies ─────────────────────────┐" << std::endl;
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

std::string		zombieNameInput(void)
{
	std::string input;
	
	std::cout << ">> Please name the zombie : ";
	std::cin >> input;
	if (std::cin.fail())
	{
		std::cout << "* Error: Invalid value." << std::endl;
		std::cin.clear();
		std::cin.ignore(256, '\n');
		return (zombieNameInput()) ;
	}
	if (std::cin.eof())
		return ("");
	return ((std::string)input);
}

void			makeRandomZombie(ZombieEvent event)
{
	int				num;

	std::cout << ">> How many zombies do you need? : ";
	std::cin >> num;
	if (std::cin.fail())
	{
		std::cout << "* Error: Invalid value." << std::endl;
		std::cin.clear();
		std::cin.ignore(256, '\n');
		return (makeRandomZombie(event)) ;
	}
	if (std::cin.eof())
		return ;
	for (int i = 0 ; i < num ; i++)
	{
		usleep(1000000);
		event.randomChump();
	}
	if (num > 0)
		std::cout << "\n## Zombies were born. ##" << std::endl;
}

int				main(void)
{
	int				idx;
	std::string 	type;
	std::string		name;
	Zombie 			*slave;
	ZombieEvent 	event;

	Zombie("master", "jwon");
	std::cout << "\n## King of the zombie, jwon was born. ##" << std::endl;
	std::cout << "\n## Now, Let's make a slave zombies. ##" << std::endl;
	if (!(idx = zombieTypeInput()))
		return (-1);
	type = zombieTypePicker(idx);
	if ((name = zombieNameInput()) == "")
		return (-1);
	event.setZombieType(type);
	slave = event.newZombie(name);
	std::cout << "\n## Zombie " << name << " was born. ##" << std::endl;
	std::cout << std::endl;
	delete(slave);
	makeRandomZombie(event);
	return (0);
}