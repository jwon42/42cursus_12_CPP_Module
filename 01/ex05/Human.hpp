/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 13:53:25 by jwon              #+#    #+#             */
/*   Updated: 2020/12/27 16:53:27 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Human
{
	public:
		Human();
		~Human();
		const Brain		&getBrain();
		std::string		identify();

	private:
		const Brain		_brain;
};

#endif