/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 19:30:10 by jwon              #+#    #+#             */
/*   Updated: 2021/01/26 19:31:07 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include <iostream>
# include <string>
# include "ISpaceMarine.hpp"

class AssaultTerminator: public ISpaceMarine
{
	public:
		AssaultTerminator();
		AssaultTerminator(AssaultTerminator const &ref);
		AssaultTerminator& operator=(AssaultTerminator const& ref);
		virtual ~AssaultTerminator();


		virtual ISpaceMarine	*clone() const;
		virtual void			battleCry() const;
		virtual void			rangedAttack() const;
		virtual void			meleeAttack() const;
};

#endif
