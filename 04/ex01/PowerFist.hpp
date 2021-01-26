/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 17:54:52 by jwon              #+#    #+#             */
/*   Updated: 2021/01/26 18:43:13 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"

class PowerFist: public AWeapon
{
	public:
		PowerFist();
		PowerFist(PowerFist const &ref);
		PowerFist& operator=(PowerFist const &ref);
		virtual ~PowerFist();

		virtual void	attack() const;
};

#endif
