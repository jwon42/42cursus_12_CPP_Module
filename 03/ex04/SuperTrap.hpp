/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 21:37:24 by jwon              #+#    #+#             */
/*   Updated: 2021/01/23 00:50:47 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
	public:
		// Canonical Form
		SuperTrap(); // Default constructor (기본생성자)
		SuperTrap(std::string name); // Constructor Overloading (생성자 오버로딩)
		SuperTrap(SuperTrap const & ref); // Copy constructor (복사생성자)
		SuperTrap&		operator=(SuperTrap const & ref); // Assignation operator (할당연산자)
		virtual ~SuperTrap(); // Destructor (소멸자)
		// Canonical Form

		// using			FragTrap::rangedAttack;
		// using			NinjaTrap::meleeAttack;
		unsigned int	rangedAttack(std::string const & target);
		unsigned int	meleeAttack(std::string const & target);
};

#endif