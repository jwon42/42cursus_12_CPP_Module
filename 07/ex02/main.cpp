/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 21:34:05 by jwon              #+#    #+#             */
/*   Updated: 2021/01/31 13:53:20 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

std::string dash(50, '-');

void arrayTest(unsigned int);

int main(int argc, char *argv[])
{
	int	n;

	// check number of arguments
	if (argc != 2)
	{
		std::cerr << "Error: Invalid arguments" << std::endl;
		return (EXIT_FAILURE);
	}

	// check stoi exceptions
	try
	{
		n = std::stoi(static_cast<std::string>(argv[1]));
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: Invalid arguments" << '\n';
		return (EXIT_FAILURE);
	}

	 // check whether a number is positive or negative
	if (n < 0)
	{
		std::cerr << "Error: Invalid arguments" << std::endl;
		return (EXIT_FAILURE);
	}

	// start test
	std::cout << "\n\t\t\033[1;31m     ARRAY TEST\033[0m" << std::endl;
	arrayTest(static_cast<unsigned int>(n));

	return (EXIT_SUCCESS);
}

void arrayTest(unsigned int n)
{
	Array<int>			intArr(n);
	Array<int>			intArr2;
	Array<double>		doubleArr(n);
	Array<char>			charArr(n);
	Array<std::string>	stringArr(n);

	// assign array data
	for (unsigned int i = 0 ; i < n ; i++)
	{
		intArr[i] = i + 1;
		doubleArr[i] = i + 1.42;
		charArr[i] = static_cast<char>(i + 33);
		stringArr[i] = "jwon";
	}

	std::cout << dash << std::endl;
	std::cout << ">>> TEST: Print intArr <<<" << std::endl;
	std::cout << dash << std::endl;
	for (unsigned int i = 0 ; i < n ; i++)
	{
		std::cout << "intArr[" << i << "] : "
			<< intArr[i] << std::endl;
	}
	std::cout << dash << std::endl;
	std::cout << std::endl;

	std::cout << dash << std::endl;
	std::cout << ">>> TEST: Copy(Assign) intArr to intArr2 <<<" << std::endl;
	std::cout << "intArr = intArr2;" << std::endl;
	intArr2 = intArr;
	std::cout << dash << std::endl;
	std::cout << ">>> TEST: Print intArr2 <<<" << std::endl;
	std::cout << dash << std::endl;
	for (unsigned int i = 0 ; i < n ; i++)
	{
		std::cout << "intArr2[" << i << "] : "
			<< intArr2[i] << std::endl;
	}
	std::cout << dash << std::endl;
	std::cout << std::endl;

	std::cout << dash << std::endl;
	std::cout << ">>> TEST: Print doubleArr <<<" << std::endl;
	std::cout << dash << std::endl;
	for (unsigned int i = 0 ; i < n ; i++)
	{
		std::cout << "doubleArr[" << i << "] : "
			<< doubleArr[i] << std::endl;
	}
	std::cout << dash << std::endl;
	std::cout << std::endl;

	std::cout << dash << std::endl;
	std::cout << ">>> TEST: Print charArr <<<" << std::endl;
	std::cout << dash << std::endl;
	for (unsigned int i = 0 ; i < n ; i++)
	{
		std::cout << "charArr[" << i << "] : "
			<< charArr[i] << std::endl;
	}
	std::cout << dash << std::endl;
	std::cout << std::endl;

	std::cout << dash << std::endl;
	std::cout << ">>> TEST: Print stringArr <<<" << std::endl;
	std::cout << dash << std::endl;
	for (unsigned int i = 0 ; i < n ; i++)
	{
		std::cout << "stringArr[" << i << "] : "
			<< stringArr[i] << std::endl;
	}
	std::cout << dash << std::endl;
	std::cout << std::endl;

	std::cout << dash << std::endl;
	std::cout << ">>> TEST: Change stringArr value(s) <<<" << std::endl;
	for (unsigned int i = 0 ; i < n ; i++)
		stringArr[i] = "changed";
	std::cout << dash << std::endl;
	std::cout << ">>> TEST: Print stringArr <<<" << std::endl;
	std::cout << dash << std::endl;
	for (unsigned int i = 0 ; i < n ; i++)
	{
		std::cout << "stringArr[" << i << "] : "
			<< stringArr[i] << std::endl;
	}
	std::cout << dash << std::endl;
	std::cout << std::endl;

	std::cout << dash << std::endl;
	std::cout << ">>> TEST: Out of range exception <<<" << std::endl;
	std::cout << dash << std::endl;
	std::cout << "std::cout << stringArr[-1];" << std::endl;
	std::cout << dash << std::endl;
	try
	{
		std::cout << stringArr[-1] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << dash << std::endl;
	std::cout << "std::cout << stringArr[n];" << std::endl;
	std::cout << dash << std::endl;
	try
	{
		std::cout << stringArr[n] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << dash << std::endl;
	std::cout << std::endl;

	std::cout << dash << std::endl;
	std::cout << ">>> TEST: Check array size <<<" << std::endl;
	std::cout << dash << std::endl;
	std::cout << "intArr.size() : " << intArr.size() << std::endl;
	std::cout << "intArr2.size() : " << intArr2.size() << std::endl;
	std::cout << "doubleArr.size() : " << doubleArr.size() << std::endl;
	std::cout << "charArr.size() : " << charArr.size() << std::endl;
	std::cout << "stringArr.size() : " << stringArr.size() << std::endl;
	std::cout << dash << std::endl;
}
