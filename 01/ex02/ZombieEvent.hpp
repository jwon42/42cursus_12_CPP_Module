/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 19:07:58 by jwon              #+#    #+#             */
/*   Updated: 2020/11/27 16:16:25 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent
{
	public:
		ZombieEvent();
		void			setZombieType(std::string type);
		Zombie			*newZombie(std::string name);
		std::string		randomNameGenerator(void);
		void			randomChump(void);
		~ZombieEvent();

	private:
		std::string		_type;
};

#endif