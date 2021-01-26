/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 17:55:00 by jwon              #+#    #+#             */
/*   Updated: 2021/01/26 18:46:47 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <iostream>
# include <string>
# include "Enemy.hpp"

class SuperMutant: public Enemy
{
	public:
		SuperMutant();
		SuperMutant(SuperMutant const &ref);
		SuperMutant	&operator=(SuperMutant const &ref);
		virtual ~SuperMutant();

		virtual void	takeDamage(int amount);
};

#endif
