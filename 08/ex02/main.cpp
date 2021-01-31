/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 01:08:47 by jwon              #+#    #+#             */
/*   Updated: 2021/01/31 16:25:43 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <list>

std::string dash(46, '-');

void	mutantStackTest(void);
void	listTest(void);

int main()
{
	std::cout << "\n\t\033[1;31m MUTANTSTACK TEST\033[0m" << std::endl;
	std::cout << dash << std::endl;
	std::cout << ">>> TEST_1: mutantStack <<<" << std::endl;
	std::cout << dash << std::endl;
	mutantStackTest();

	std::cout << std::endl;
	std::cout << dash << std::endl;
	std::cout << ">>> TEST_2: list <<<" << std::endl;
	std::cout << dash << std::endl;
	listTest();

	return (EXIT_SUCCESS);
}

void	mutantStackTest(void)
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	std::cout << dash << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << dash << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << dash << std::endl;
}

void	listTest(void)
{
	std::list<int> mlist;
	mlist.push_back(5);
	mlist.push_back(17);
	std::list<int>::iterator itlast = mlist.end();
	std::cout << *(--itlast) << std::endl;
	std::cout << dash << std::endl;
	mlist.pop_back();
	std::cout << mlist.size() << std::endl;
	mlist.push_back(3);
	mlist.push_back(5);
	mlist.push_back(737);
	mlist.push_back(0);

	std::list<int>::iterator it = mlist.begin();
	std::list<int>::iterator ite = mlist.end();
	++it;
	--it;
	std::cout << dash << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::list<int> s(mlist);
	std::cout << dash << std::endl;
}