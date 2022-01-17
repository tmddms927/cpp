/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seung-eun <seung-eun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 14:01:02 by seung-eun         #+#    #+#             */
/*   Updated: 2021/10/11 20:08:15 by seung-eun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void	print_list(Contact *contact)
{
	std::cout << std::setw(10) << "index" << "|" << std::setw(10) << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|" << std::setw(10) << "nickname" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		contact[i].print_list(i);
	}
}

int		main(void)
{
	std::string	menu;
	Contact		contact[8];
	int			index = 0;

	while (1)
	{
		std::cout << "Enter a command (ADD or SEARCH or EXIT):";
		std::cin >> menu;
		if (std::cin.eof())
			break ;
		if (menu == "ADD")
			contact[index].get_info(&index);
		else if (menu == "SEARCH")
		{
			print_list(contact);
			std::string num;
			std::cout << "Enter index to get full page:";
			std::cin >> num;
			if (std::cin.eof())
				break ;
			if (num.length() != 1 || num[0] - '0' < 0 || num[0] - '0' > 7)
				std::cout << "wrong index!" << std::endl;
			else
				contact[num[0] - '0'].print_contact();
		}
		else if (menu == "EXIT")
		{
			std::cout << "EXIT" << std::endl;
			break;
		}
	}
	return (0);
}
