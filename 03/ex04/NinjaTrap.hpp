/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 21:09:18 by jwon              #+#    #+#             */
/*   Updated: 2021/01/22 23:08:47 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include <string>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "ClapTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
	public:
		// Canonical Form
		NinjaTrap(); // Default constructor (기본생성자)
		NinjaTrap(std::string name); // Constructor Overloading (생성자 오버로딩)
		NinjaTrap(NinjaTrap const & ref); // Copy constructor (복사생성자)
		NinjaTrap&		operator=(NinjaTrap const & ref); // Assignation operator (할당연산자)
		~NinjaTrap(); // Destructor (소멸자)
		// Canonical Form

		void			ninjaShoebox(const FragTrap & ref);
		void			ninjaShoebox(const ScavTrap & ref);
		void			ninjaShoebox(const NinjaTrap & ref);
		void			ninjaShoebox(const ClapTrap & ref);
};

#endif