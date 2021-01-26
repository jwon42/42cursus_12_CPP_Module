/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 17:17:43 by jwon              #+#    #+#             */
/*   Updated: 2021/01/26 17:52:07 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Sorcerer
{
	public:
		// Canonical Form // Default constructor (기본생성자)
		Sorcerer(std::string const name, std::string const title); // Constructor Overloading (생성자 오버로딩)
		Sorcerer(Sorcerer const &ref); // Copy constructor (복사생성자)
		Sorcerer& operator=(Sorcerer const &ref); // Assignation operator (할당연산자)
		~Sorcerer(); // Destructor (소멸자)
		// Canonical Form

		std::string		getName(void) const;
		std::string		getTitle(void) const;
		void			polymorph(Victim const &ref) const;

	protected:
		// Canonical Form
		Sorcerer(); // Default constructor (기본생성자)
		// Canonical Form

		std::string		m_name;
		std::string		m_title;
};

std::ostream& operator<<(std::ostream &os, Sorcerer const &ref);

#endif
