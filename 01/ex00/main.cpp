/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 14:25:50 by jwon              #+#    #+#             */
/*   Updated: 2020/11/23 14:35:39 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap(std::string name)
{
	Pony *pony = new Pony(name);
	std::cout << "Your name is stored in the heap area." << std::endl;
	delete pony;
}

void	ponyOnTheStack(std::string name)
{
	Pony pony(name);
	std::cout << "Your name is stored in the stack area." << std::endl;
}

int		main(void)
{
	std::string name;

	std::cout << "What's your name? : ";
	std::cin >> name;
	std::cout << "─────────────────────────────────────────────" << std::endl;
	ponyOnTheHeap(name);
	std::cout << "─────────────────────────────────────────────" << std::endl;
	ponyOnTheStack(name);
	std::cout << "─────────────────────────────────────────────" << std::endl;
	return (0);
}