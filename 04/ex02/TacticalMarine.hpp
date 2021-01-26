/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 19:39:41 by jwon              #+#    #+#             */
/*   Updated: 2021/01/26 19:39:42 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include <iostream>
# include <string>
# include "ISpaceMarine.hpp"

class TacticalMarine: public ISpaceMarine
{
	public:
		TacticalMarine();
		TacticalMarine(TacticalMarine const &ref);
		TacticalMarine& operator=(TacticalMarine const &ref);
		virtual ~TacticalMarine();

		virtual ISpaceMarine	*clone() const;
		virtual void			battleCry() const;
		virtual void			rangedAttack() const;
		virtual void			meleeAttack() const;
};

#endif
