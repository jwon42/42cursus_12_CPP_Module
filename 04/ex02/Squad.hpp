/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 19:34:43 by jwon              #+#    #+#             */
/*   Updated: 2021/01/26 19:45:32 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include <string>
# include "ISquad.hpp"

class Squad: public ISquad
{
	public:
		Squad();
		Squad(Squad const &ref);
		Squad& operator=(Squad const &ref);
		virtual ~Squad();

		virtual int				getCount() const;
		virtual ISpaceMarine	*getUnit(int unit) const;

		virtual int				push(ISpaceMarine *unit);

	private:
		int				m_count;
		ISpaceMarine	**m_unit;
};

#endif
