/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 11:27:25 by jwon              #+#    #+#             */
/*   Updated: 2020/11/28 13:02:42 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde
{
	public:
		ZombieHorde(int n, std::string type);
		std::string		randomNameGenerator(void);
		~ZombieHorde();

	private:
		int				_n;
		std::string		_type;
		Zombie			*_zombie;
};

#endif