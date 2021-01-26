/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <jwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 17:54:56 by jwon              #+#    #+#             */
/*   Updated: 2021/01/26 18:45:02 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include <iostream>
# include <string>
# include "Enemy.hpp"

class RadScorpion: public Enemy
{
	public:
		RadScorpion();
		RadScorpion(RadScorpion const &ref);
		RadScorpion& operator=(RadScorpion const &ref);
		virtual ~RadScorpion();
};

#endif
