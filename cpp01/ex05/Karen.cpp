/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungoh <seungoh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 09:39:31 by seungoh           #+#    #+#             */
/*   Updated: 2021/12/03 11:17:38 by seungoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{
	
}

Karen::~Karen()
{
	
}

void Karen::debug(void)
{
	std::cout << "<DUBUG> I love to get extra bacon for\
	my 7XL-double-cheese-triple-pickle-special-ketchup burger.\
	I just love it!" << std::endl;
}

void Karen::info(void)
{
	std::cout << "<INFO> I cannot believe adding extra bacon cost more money.\
	You don’t put enough! If you did I would not have to ask for it!" << std::endl;	
}

void Karen::warning(void)
{
	std::cout << "<WARNING> I think I deserve to have some extra bacon for free. I’ve been\
	coming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void)
{
	std::cout << "<ERROR> This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level)
{
	void	(Karen::*f[])(void) = { &Karen::debug, &Karen::info, &Karen::warning, &Karen::error };
	std::string	name[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	/*
	** 1. 멤버 함수는 일반 함수와 지칭 방법이 조금은 다르다. 일반 함수와 달리 무조건 주소를 줘야한다 (이름을 못 줌)
	** 2. 그래서 호출을 할 때 무조건 역참조가 필요하다.
	** 3. 호출 시에 역참조를 하더라도 네임스페이스를 인식시킬 필요가 있다.
	*/

	for (int i = 0; i < 4; ++i)
	{
		if (name[i] == level)
			(this->*(f[i]))();
	}
}
