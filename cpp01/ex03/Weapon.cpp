/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungoh <seungoh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 09:21:15 by seungoh           #+#    #+#             */
/*   Updated: 2021/12/03 11:23:10 by seungoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	
}

Weapon::~Weapon()
{
	
}

Weapon::Weapon(std::string type)
{
	this->type = type;
}

const std::string	&Weapon::getType(void)
{
	return this->type;
}

void				Weapon::setType(std::string type)
{
	this->type = type;
}
