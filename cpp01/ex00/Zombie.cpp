/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungoh <seungoh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 16:44:04 by seungoh           #+#    #+#             */
/*   Updated: 2021/11/29 17:01:37 by seungoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie()
{
    std::cout << "< " << this->name << " > destructor!" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << "< " << this->name << " > BraiiiiiiinnnzzzZ..." << std::endl;
}
