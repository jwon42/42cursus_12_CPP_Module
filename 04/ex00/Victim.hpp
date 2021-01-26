/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 17:17:51 by jwon              #+#    #+#             */
/*   Updated: 2021/01/26 17:47:47 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class Victim
{
	public:
		// Canonical Form
		Victim(); // Default constructor (기본생성자)
		Victim(std::string name); // Constructor Overloading (생성자 오버로딩)
		Victim(Victim const &ref); // Copy constructor (복사생성자)
		Victim&	operator=(Victim const &ref); // Assignation operator (할당연산자)
		virtual ~Victim(); // Virtual Destructor (가상소멸자)
		// Canonical Form

		std::string		getName(void) const;
		virtual void	getPolymorphed(void) const;

	protected:
		std::string		m_name;
};

std::ostream&	operator<<(std::ostream &os, const Victim &ref);

#endif
