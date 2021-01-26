/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 17:54:31 by jwon              #+#    #+#             */
/*   Updated: 2021/01/26 19:45:12 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# include <string>

class AWeapon
{
	public:
		AWeapon(std::string const &name, int apcost, int damage);
		AWeapon(AWeapon const &ref);
		AWeapon &operator=(AWeapon const &ref);
		virtual ~AWeapon();

		std::string		getName() const;
		int				getAPCost() const;
		int				getDamage() const;

		virtual void	attack() const = 0;

	protected:
		AWeapon();

		std::string		m_name;
		int				m_apcost;
		int				m_damage;
};

#endif
