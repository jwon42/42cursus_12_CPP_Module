/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 17:37:05 by jwon              #+#    #+#             */
/*   Updated: 2021/01/22 23:07:22 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include <unistd.h>

class ScavTrap
{
	public:
		// Canonical Form
		ScavTrap(); // Default constructor (기본생성자)
		ScavTrap(std::string name); // Constructor Overloading (생성자 오버로딩)
		ScavTrap(ScavTrap const & ref); // Copy constructor (복사생성자)
		ScavTrap&		operator=(ScavTrap const & ref); // Assignation operator (할당연산자)
		~ScavTrap(); // Destructor (소멸자)
		// Canonical Form

		std::string		m_name;
		unsigned int	rangedAttack(std::string const & target);
		unsigned int	meleeAttack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			challengeNewcomer(void);
		void			playerStatus(void);

	private:
		int				m_hp;
		int				m_max_hp;
		int				m_energy;
		int				m_max_energy;
		int				m_level;
		int				m_melee_damage;
		int				m_range_damage;
		int				m_armor_reduction;
};

#endif