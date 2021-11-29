/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seung-eun <seung-eun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:08:34 by seung-eun         #+#    #+#             */
/*   Updated: 2021/10/09 18:47:27 by seung-eun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

//contact 생성자
Contact::Contact (void)
{
	this->fill = false;
}

// 정보 입력 받은 후 저장 함수
void Contact::get_info(int *index)
{
	std::cout << "first name : ";
	std::cin >> this->first_name;
	if (std::cin.eof())
		return ;
	std::cout << "last name : ";
	std::cin >> this->last_name;
	if (std::cin.eof())
		return ;
	std::cout << "nickname : ";
	std::cin >> this->nickname;
	if (std::cin.eof())
		return ;
	std::cout << "phone number : ";
	std::cin >> this->phone_num;
	if (std::cin.eof())
		return ;
	std::cout << "darkest secret : ";
	std::cin >> this->darkest_sec;
	if (std::cin.eof())
		return ;

	(*index)++;
	if (*index == 8)
		*index = 0;
	this->fill = true;
}

// 연락처 list 출력 함수
void Contact::print_list(int i)
{
	if (!this->fill)
		return ;
	std::cout << std::setw(10) << i << "|";
	if (this->first_name.length() > 10)
		std::cout << this->first_name.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << this->first_name << "|";
	if (this->last_name.length() > 10)
		std::cout << this->last_name.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << this->last_name << "|";
	if (this->nickname.length() > 10)
		std::cout << this->nickname.substr(0, 9) << "." << std::endl;
	else
		std::cout << std::setw(10) << this->nickname << std::endl;
}

// 연락처 출력 함수
void Contact::print_contact(void)
{
	if (!this->fill)
	{
		std::cout << "wrong index!" << std::endl;
		return ;
	}
	std::cout << this->first_name << std::endl;
	std::cout << this->last_name << std::endl;
	std::cout << this->nickname << std::endl;
	std::cout << this->phone_num << std::endl;
	std::cout << this->darkest_sec << std::endl;
}
