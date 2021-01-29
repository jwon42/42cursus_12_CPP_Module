/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 20:54:53 by jwon              #+#    #+#             */
/*   Updated: 2021/01/29 21:24:27 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include "Awesome.hpp" // for test

std::string dash(29, '-');

void	testIter(void);

int main(void)
{
	std::cout << "\n\t\033[1;31m  ITER TEST\033[0m" << std::endl;
	testIter();

	return (EXIT_SUCCESS);
}

void	testIter(void)
{
	int  			intArr[3] = {1, 2, 3};
	char			charArr[3] = {'a', 'b', 'c'};
	std::string		stringArr[3] = {"12345", "abcde", "ABCDE"};
	Awesome			awesomeArr[3];

	std::cout << dash << std::endl;
	std::cout << ">>> TEST \'func\' FUNCTION <<<" << std::endl;
	std::cout << dash << std::endl;
	::iter(intArr, 3, ::func);
	std::cout << dash << std::endl;
	::iter(charArr, 3, ::func);
	std::cout << dash << std::endl;
	::iter(stringArr, 3, ::func);
	std::cout << dash << std::endl;
	::iter(awesomeArr, 3, ::func);
	std::cout << dash << std::endl;
	std::cout << std::endl;

	std::cout << dash << std::endl;
	std::cout << ">>> TEST \'print\' FUNCTION <<<" << std::endl;
	std::cout << dash << std::endl;
	::iter(intArr, 3, ::print);
	std::cout << dash << std::endl;
	::iter(charArr, 3, ::print);
	std::cout << dash << std::endl;
	::iter(stringArr, 3, ::print);
	std::cout << dash << std::endl;
	::iter(awesomeArr, 3, ::print);
	std::cout << dash << std::endl;
}