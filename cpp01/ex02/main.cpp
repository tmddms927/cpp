/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungoh <seungoh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 19:20:52 by seungoh           #+#    #+#             */
/*   Updated: 2021/11/29 20:23:25 by seungoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "<< std address >>" << std::endl;
	std::cout << &str << std::endl;
	std::cout << "<< stringPTR address >>" << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << "<< stringREF address >>" << std::endl;
	std::cout << &stringREF << std::endl;
}