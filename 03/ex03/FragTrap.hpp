/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 17:37:05 by jwon              #+#    #+#             */
/*   Updated: 2021/01/22 23:08:09 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		// Canonical Form
		FragTrap(); // Default constructor (기본생성자)
		FragTrap(std::string name); // Constructor Overloading (생성자 오버로딩)
		FragTrap(FragTrap const & ref); // Copy constructor (복사생성자)
		FragTrap&		operator=(FragTrap const & ref); // Assignation operator (할당연산자)
		~FragTrap(); // Destructor (소멸자)
		// Canonical Form

		unsigned int	vaulthunter_dot_exe(std::string const & target);
};

#endif