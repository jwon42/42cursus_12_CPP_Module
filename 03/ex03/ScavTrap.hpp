/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 17:37:05 by jwon              #+#    #+#             */
/*   Updated: 2021/01/22 23:08:20 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include <unistd.h>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		// Canonical Form
		ScavTrap(); // Default constructor (기본생성자)
		ScavTrap(std::string name); // Constructor Overloading (생성자 오버로딩)
		ScavTrap(ScavTrap const & ref); // Copy constructor (복사생성자)
		ScavTrap&		operator=(ScavTrap const & ref); // Assignation operator (할당연산자)
		~ScavTrap(); // Destructor (소멸자)
		// Canonical Form

		void			challengeNewcomer(void);
};
#endif