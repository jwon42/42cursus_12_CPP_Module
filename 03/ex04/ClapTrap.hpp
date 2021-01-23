/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 19:15:09 by jwon              #+#    #+#             */
/*   Updated: 2021/01/23 00:34:22 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	public:
		// Canonical Form
		ClapTrap(); // Default constructor (기본생성자)
		ClapTrap(std::string name); // Constructor Overloading (생성자 오버로딩)
		ClapTrap(ClapTrap const & ref); // Copy constructor (복사생성자)
		ClapTrap&		operator=(ClapTrap const & ref); // Assignation operator (할당연산자)
		virtual			~ClapTrap(); // Virtual Destructor (가상소멸자)
		// Canonical Form

		std::string		m_name;
		unsigned int	rangedAttack(std::string const & target);
		unsigned int	meleeAttack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			playerStatus(void);

	protected:
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