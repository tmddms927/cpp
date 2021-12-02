/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungoh <seungoh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 09:39:31 by seungoh           #+#    #+#             */
/*   Updated: 2021/12/02 11:01:40 by seungoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{
	this->level[0].name = "DEBUG";
	this->level[0].f = &Karen::debug;
	this->level[1].name = "INFO";
	this->level[1].f = &Karen::info;
	this->level[2].name = "WARNING";
	this->level[2].f = &Karen::warning;
	this->level[3].name = "ERROR";
	this->level[3].f = &Karen::error;
}

Karen::~Karen()
{
	
}

void Karen::debug(void)
{
	std::cout << "I love to get extra bacon for\
	my 7XL-double-cheese-triple-pickle-special-ketchup burger.\
	I just love it!" << std::endl;
}

void Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money.\
	You don’t put enough! If you did I would not have to ask for it!" << std::endl;	
}

void Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been\
	coming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level)
{
	for (int i = 0; i < 4; ++i)
	{
		if (level == this->level[i].name)
			(this->level[i]).f();
	}
}
