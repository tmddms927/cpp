/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungoh <seungoh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 09:21:34 by seungoh           #+#    #+#             */
/*   Updated: 2021/11/30 10:45:27 by seungoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon *weapon;
		std::string name;

	public:
		HumanB();
		HumanB(std::string name, Weapon &weapon);
		HumanB(std::string name);
		void	attack(void);
		void	setWeapon(Weapon &weapon);
};

#endif
