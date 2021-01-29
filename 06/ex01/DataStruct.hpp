/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DataStruct.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 01:54:49 by jwon              #+#    #+#             */
/*   Updated: 2021/01/29 10:34:52 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATASTRUCT_HPP
# define DATASTRUCT_HPP

# include <iostream>
# include <string>
# include <unistd.h>

struct Data
{
	std::string		s1;
	int				n;
	std::string		s2;
};

void	*serialize(void);
Data	*deserialize(void *raw);

#endif