/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 18:19:17 by jwon              #+#    #+#             */
/*   Updated: 2021/01/22 21:31:49 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

void fragtrapTest(void)
{
	FragTrap 		Jwon;
	FragTrap 		Yechoi("Yechoi");
	unsigned int	damage;

	Jwon = FragTrap("Jwon");
	std::cout << std::endl;
	Jwon.playerStatus();
	Yechoi.playerStatus();
	std::cout << std::endl;
	Jwon.takeDamage(Yechoi.rangedAttack(Jwon.m_name));
	Jwon.takeDamage(Yechoi.rangedAttack(Jwon.m_name));
	std::cout << std::endl;
	Yechoi.takeDamage(Jwon.meleeAttack(Yechoi.m_name));
	Yechoi.takeDamage(Jwon.meleeAttack(Yechoi.m_name));
	std::cout << std::endl;
	Yechoi.beRepaired(42);
	Yechoi.beRepaired(42);
	std::cout << std::endl;
	Jwon.beRepaired(5);
	Jwon.beRepaired(5);
	std::cout << std::endl;

	srand(time(NULL));
	std::cout << ">>> Start random attack!!!! <<<" << std::endl;
	Jwon.playerStatus();
	Yechoi.playerStatus();
	std::cout << std::endl;
	for (int i = 0 ; i < 5 ; i++)
	{
		usleep(800000);
		if ((damage = Yechoi.vaulthunter_dot_exe(Jwon.m_name)) == 0)
			break ;
		Jwon.takeDamage(damage);
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

void scavtrapTest(void)
{
	ScavTrap 		Jwon;
	ScavTrap 		Yechoi("Yechoi");

	Jwon = ScavTrap("Jwon");
	std::cout << std::endl;
	Jwon.playerStatus();
	Yechoi.playerStatus();
	std::cout << std::endl;
	Jwon.takeDamage(Yechoi.rangedAttack(Jwon.m_name));
	Jwon.takeDamage(Yechoi.rangedAttack(Jwon.m_name));
	std::cout << std::endl;
	Yechoi.takeDamage(Jwon.meleeAttack(Yechoi.m_name));
	Yechoi.takeDamage(Jwon.meleeAttack(Yechoi.m_name));
	std::cout << std::endl;
	Yechoi.beRepaired(42);
	Yechoi.beRepaired(42);
	std::cout << std::endl;
	Jwon.beRepaired(5);
	Jwon.beRepaired(5);
	std::cout << std::endl;

	srand(time(NULL));
	std::cout << ">>> Start random attack!!!! <<<" << std::endl;
	Jwon.playerStatus();
	Yechoi.playerStatus();
	std::cout << std::endl;
	for (int i = 0 ; i < 2 ; i++)
	{
		usleep(800000);
		Jwon.challengeNewcomer();
	}
	std::cout << std::endl;
}

void ninjatrapTest(void)
{
	FragTrap	Polarbear("Polarbear");
	ScavTrap 	Doby("Doby");
	ClapTrap	Dall("Dall");
	NinjaTrap	Ninja("Ninja");

	std::cout << std::endl;
	Polarbear.playerStatus();
	Doby.playerStatus();
	Dall.playerStatus();
	Ninja.playerStatus();
	std::cout << std::endl;
	Ninja.takeDamage(42);
	std::cout << std::endl;
	Ninja.beRepaired(10);
	Ninja.beRepaired(10);
	std::cout << std::endl;
	Ninja.ninjaShoebox(Polarbear);
	Ninja.ninjaShoebox(Doby);
	Ninja.ninjaShoebox(Dall);
	Ninja.ninjaShoebox(Ninja);
	std::cout << std::endl;
}

int	main(void)
{
	std::cout << "───────FRAGTRAP TEST START───────" << std::endl;
	fragtrapTest();
	std::cout << "─────────────────────────────────" << std::endl;
	std::cout << std::endl;
	std::cout << "───────SCAVTRAP TEST START───────" << std::endl;
	scavtrapTest();
	std::cout << "─────────────────────────────────" << std::endl;
	std::cout << std::endl;
	std::cout << "───────NINJATRAP TEST START───────" << std::endl;
	ninjatrapTest();
	std::cout << "─────────────────────────────────" << std::endl;
	return (EXIT_SUCCESS);
}