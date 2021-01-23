/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 19:01:56 by jwon              #+#    #+#             */
/*   Updated: 2020/11/28 12:59:45 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <unistd.h>

class Zombie
{
	public:
		Zombie();
		Zombie(std::string type, std::string name);
		void			setMember(std::string type, std::string name);
		void			announce(void);
		~Zombie();

	private:
		std::string		_type;
		std::string 	_name;
};

#endif