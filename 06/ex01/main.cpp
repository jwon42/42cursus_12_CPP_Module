/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 02:24:41 by jwon              #+#    #+#             */
/*   Updated: 2021/01/29 13:26:53 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DataStruct.hpp"

int main(void)
	{
	void	*raw = serialize();
	Data	*data = deserialize(raw);

	std::cout << "DATA -> S1 = \""
		<< data->s1 << "\"("
		<< sizeof(data->s1) << " bytes)" << std::endl;
	std::cout << "DATA -> n = \""
		<< data->n << "\"("
		<< sizeof(data->n) << " bytes)" << std::endl;
	std::cout << "DATA -> S2 = \""
		<< data->s2 << "\"("
		<< sizeof(data->s2) << " bytes)" << std::endl;

	delete static_cast<char*>(raw);
	delete data;
	return (EXIT_SUCCESS);
}
