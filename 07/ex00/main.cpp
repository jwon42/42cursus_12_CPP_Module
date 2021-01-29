/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 17:17:05 by jwon              #+#    #+#             */
/*   Updated: 2021/01/29 19:12:57 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include "Awesome.hpp"

std::string dash(43, '-');

void	testSwapFunction(void);
void	testMinFunction(void);
void	testMaxFunction(void);

int main(void)
{
	std::cout << "\n\t\033[1;31m  TEMPLATE FUNCTION TEST\033[0m" << std::endl;
	testSwapFunction();
	std::cout << std::endl;
	testMinFunction();
	std::cout << std::endl;
	testMaxFunction();

	return (EXIT_SUCCESS);
}

void	testSwapFunction(void)
{
	std::cout << dash << std::endl;
	std::cout << "\t>>> TEST SWAP FUNCTION <<<" << std::endl;
	std::cout << dash << std::endl;
	int a = 2;
	int b = 3;
	std::cout << "int a = " << a
		<< ", int b = " << b << std::endl;
	std::cout << "swap(a, b)" << std::endl;
	::swap(a, b);
	std::cout << "int a = " << a
		<< ", int b = " << b << std::endl;
	std::cout << dash << std::endl;

	double c = 02.14444444444444;
	double d = 03.14444444444444;
	std::cout << "double c = " << c
		<< ", double d = " << d << std::endl;
	std::cout << "swap(c, d)" << std::endl;
	::swap(c, d);
	std::cout << "double c = " << c
		<< ", double d = " << d << std::endl;
	std::cout << dash << std::endl;

	char e = 'e';
	char f = 'f';
	std::cout << "char e = " << e
		<< ", char f = " << f << std::endl;
	std::cout << "swap(e, f)" << std::endl;
	::swap(e, f);
	std::cout << "char e = " << e
		<< ", char f = " << f << std::endl;
	std::cout << dash << std::endl;

	Awesome g(42);
	Awesome h(24);
	std::cout << "Awesome g = " << g.getN()
		<< ", Awesome h = " << h.getN() << std::endl;
	std::cout << "swap(e, f)" << std::endl;
	::swap(g, h);
	std::cout << "Awesome g = " << g.getN()
		<< ", Awesome g = " << h.getN() << std::endl;
	std::cout << dash << std::endl;
}

void	testMinFunction(void)
{
	std::cout << dash << std::endl;
	std::cout << "\t>>> TEST MIN FUNCTION <<<" << std::endl;
	std::cout << dash << std::endl;
	int a = 2;
	int b = 3;
	std::cout << "int a = " << a
		<< ", int b = " << b << std::endl;
	std::cout << "min(a, b) : "
		<< ::min(a, b) << std::endl;
	std::cout << dash << std::endl;

	double c = 02.14444444444444;
	double d = 03.14444444444444;
	std::cout << "double c = " << c
		<< ", double d = " << d << std::endl;
	std::cout << "min(c, d) : "
		<< ::min(c, d) << std::endl;
	std::cout << dash << std::endl;

	char e = 'e';
	char f = 'f';
	std::cout << "char e = " << e
		<< ", char f = " << f << std::endl;
	std::cout << "min(e, f) : "
		<< ::min(e, f) << std::endl;
	std::cout << dash << std::endl;

	Awesome g(42);
	Awesome h(24);
	std::cout << "Awesome g = " << g.getN()
		<< ", Awesome h = " << h.getN() << std::endl;
	Awesome result = ::min(g, h);
	std::cout << "Awesome result = ::min(g, h)" << std::endl;
	std::cout << "result.getN() : " << result.getN() << std::endl;
	std::cout << dash << std::endl;
}

void	testMaxFunction(void)
{
	std::cout << dash << std::endl;
	std::cout << "\t>>> TEST MAX FUNCTION <<<" << std::endl;
	std::cout << dash << std::endl;
	int a = 2;
	int b = 3;
	std::cout << "int a = " << a
		<< ", int b = " << b << std::endl;
	std::cout << "max(a, b) : "
		<< ::max(a, b) << std::endl;
	std::cout << dash << std::endl;

	double c = 02.14444444444444;
	double d = 03.14444444444444;
	std::cout << "double c = " << c
		<< ", double d = " << d << std::endl;
	std::cout << "max(c, d) : "
		<< ::max(c, d) << std::endl;
	std::cout << dash << std::endl;

	char e = 'e';
	char f = 'f';
	std::cout << "char e = " << e
		<< ", char f = " << f << std::endl;
	std::cout << "max(e, f) : "
		<< ::max(e, f) << std::endl;
	std::cout << dash << std::endl;

	Awesome g(42);
	Awesome h(24);
	std::cout << "Awesome g = " << g.getN()
		<< ", Awesome h = " << h.getN() << std::endl;
	Awesome result = ::max(g, h);
	std::cout << "Awesome result = ::max(g, h)" << std::endl;
	std::cout << "result.getN() : " << result.getN() << std::endl;
	std::cout << dash << std::endl;
}