/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 19:34:17 by jwon              #+#    #+#             */
/*   Updated: 2021/01/26 19:45:42 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

# include <iostream>
# include <string>
# include "ISpaceMarine.hpp"

class ISquad
{
	public:
		virtual ~ISquad() {}

		virtual	int				getCount() const = 0;
		virtual ISpaceMarine	*getUnit(int unit) const = 0;

		virtual int				push(ISpaceMarine *unit) = 0;
};

#endif
