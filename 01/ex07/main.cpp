/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 19:13:17 by jwon              #+#    #+#             */
/*   Updated: 2021/01/20 20:35:47 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

int	main(int ac, char *av[])
{
	if (ac != 4)
	{
		std::cerr << "Error: Invalid arguments" << std::endl;
		return (1);
	}
	std::string filename = av[1];
	std::ifstream fileOrigin(filename);
	std::string s1(av[2]);
	std::string s2(av[3]);
	std::string line;
	std::size_t loc;

	if (!fileOrigin.is_open() || !fileOrigin.good())
	{
		std::cerr << "Error: Failed to open the file." << std::endl;
		return (1);
		fileOrigin.close();
	}
	std::ofstream fileNew(filename + ".replace", std::ios::trunc);
	if (!fileNew.good())
	{
		std::cerr << "Error : Invalid file." << std::endl;
		return (1);
		fileOrigin.close();
		fileNew.close();
	}
	if (s1.length() > 0 && s2.length() > 0)
	{
		while (std::getline(fileOrigin, line))
		{
			loc = 0;
			while ((loc = line.find(s1, loc)) != std::string::npos)
			{
				line.erase(loc, s1.length());
				line.insert(loc, s2);
				loc = loc + s2.length();
			}
			fileNew << line << '\n';
		}
	}
	else
	{
		std::cerr << "Error : String is empty." << std::endl;
		return (1);
		fileOrigin.close();
		fileNew.close();
	}
	fileOrigin.close();
	fileNew.close();
	return (0);
}