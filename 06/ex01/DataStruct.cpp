/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DataStruct.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 01:58:41 by jwon              #+#    #+#             */
/*   Updated: 2021/01/29 13:24:12 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DataStruct.hpp"

void	*serialize(void)
{
	std::string		s1;
	std::string		s2;
	int				n;

	char			*raw;

	size_t			size_string;
	size_t			size_int;
	size_t			size_raw;

	// set base chractors
	std::string		alphaNumerical = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	// calculate types size
	size_string = sizeof(std::string); // 24 bytes
	size_int = sizeof(int); // 4 bytes
	size_raw = size_string * 2 + size_int; // 52 bytes

	// allocate heap area
	raw = new char[size_raw];

	// generate random value
	srand(time(NULL));
	n = rand();
	for (int i = 0 ; i < 8 ; i++)
	{
		usleep(100000);
		s1 += alphaNumerical[rand() % alphaNumerical.length()];
		s2 += alphaNumerical[rand() % alphaNumerical.length()];
	}
	// std::cout << s1 << n << s2 << std::endl;

	// copy value to raw -> serialize
	memcpy(raw, reinterpret_cast<char *>(&s1), size_string);
	memcpy(raw + size_string, reinterpret_cast<char *>(&n), size_int);
	memcpy(raw + size_string + size_int, reinterpret_cast<char *>(&s2), size_string);

	return (raw);
}

Data	*deserialize(void *raw)
{
	Data	*data = new Data;

	// assign value to data struct -> deserialize
	data->s1 = std::string(static_cast<char *>(raw));
	data->n = *reinterpret_cast<int *>(static_cast<char *>(raw) + 24);
	data->s2 = std::string(static_cast<char *>(raw) + 28);

	return (data);
}