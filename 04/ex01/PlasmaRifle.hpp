/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 17:54:48 by jwon              #+#    #+#             */
/*   Updated: 2021/01/26 18:41:26 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include <iostream>
# include <string>

# include "AWeapon.hpp"

class PlasmaRifle: public AWeapon
{
	public:
		PlasmaRifle();
		PlasmaRifle(PlasmaRifle const &ref);
		PlasmaRifle	&operator=(PlasmaRifle const &ref);
		virtual ~PlasmaRifle();

	virtual void	attack() const;
};

#endif
