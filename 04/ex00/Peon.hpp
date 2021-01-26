/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 17:17:32 by jwon              #+#    #+#             */
/*   Updated: 2021/01/26 17:46:39 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Peon : public Victim
{
	public:
		// Canonical Form
		Peon(); // Default constructor (기본생성자)
		Peon(std::string const name); // Constructor Overloading (생성자 오버로딩)
		Peon(Peon const &ref); // Copy constructor (복사생성자)
		Peon& operator=(Peon const &ref); // Assignation operator (할당연산자)
		~Peon(); // Destructor (소멸자)
		// Canonical Form

		void	getPolymorphed(void) const;
};

#endif
