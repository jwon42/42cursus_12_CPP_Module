/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 15:38:58 by jwon              #+#    #+#             */
/*   Updated: 2021/01/31 00:37:27 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "eashfind.hpp"
# include <vector>
# include <deque>
# include <list>

std::string dash(50, '-');

void	testEasyFind(void);

int		main(void)
{
	std::cout << "\n\t\t\033[1;31mEASY FIND TEST\033[0m" << std::endl;
	testEasyFind();

	return (EXIT_SUCCESS);
}

void	testEasyFind(void)
{
	std::list<int>		l;
	std::deque<int>		q;
	std::vector<int>	v;

	// push data
	for (int i = 0 ; i < 7 ; i++)
	{
		l.push_back(i + 1);
		q.push_back((i + 1) * 10);
		v.push_back((i + 1) * 100);
	}

	// print list
	std::cout << dash << std::endl;
	std::cout << ">>> TEST: LIST <<<" << std::endl;
	std::cout << dash << std::endl;
	std::cout << ">>> print <<<" << std::endl;
	for (std::list<int>::iterator it = l.begin() ; it != l.end() ; it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	std::cout << dash << std::endl;
	std::cout << ">>> easyfind(list, 1); <<<" << std::endl;
	try
	{
		easyfind(l, 1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << dash << std::endl;
	std::cout << ">>> easyfind(list, 10); <<<" << std::endl;
	try
	{
		easyfind(l, 10);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << dash << std::endl;


	// print deque
	std::cout << std::endl;
	std::cout << dash << std::endl;
	std::cout << ">>> TEST: DEQUE <<<" << std::endl;
	std::cout << dash << std::endl;
	std::cout << ">>> print <<<" << std::endl;
	for (unsigned int i = 0 ; i < q.size() ; i++)
		std::cout << q[i] << " ";
	std::cout << std::endl;
	std::cout << dash << std::endl;
	std::cout << ">>> easyfind(deque, 10); <<<" << std::endl;
	try
	{
		easyfind(q, 10);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << dash << std::endl;
	std::cout << ">>> easyfind(deque, 11); <<<" << std::endl;
	try
	{
		easyfind(q, 11);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << dash << std::endl;

	// print vector
	std::cout << std::endl;
	std::cout << dash << std::endl;
	std::cout << ">>> TEST: VECTOR <<<" << std::endl;
	std::cout << dash << std::endl;
	std::cout << ">>> print <<<" << std::endl;
	for (unsigned int i = 0 ; i < v.size() ; i++)
		std::cout << v[i] << " ";
	std::cout << std::endl;
	std::cout << dash << std::endl;
	std::cout << ">>> easyfind(vector, 500); <<<" << std::endl;
	try
	{
		easyfind(v, 500);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << dash << std::endl;
	std::cout << ">>> easyfind(vector, 800); <<<" << std::endl;
	try
	{
		easyfind(v, 800);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << dash << std::endl;
}
