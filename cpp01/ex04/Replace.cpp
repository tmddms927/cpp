/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungoh <seungoh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 09:48:13 by seungoh           #+#    #+#             */
/*   Updated: 2021/12/02 09:57:25 by seungoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace()
{

}

Replace::~Replace()
{
    
}

void	Replace::replace(const std::string &file, const std::string &s1, const std::string &s2)
{
	if (file.empty() || s1.empty() || s2.empty())
	{
		std::cout << "error!" << std::endl;
		return ;
	}

	std::ifstream			ifs(file);
	std::ostringstream		ss;
	std::string				str;
	std::string::size_type	find_n;

	//파일에서 문자열 읽어오기
	if (!ifs.good())
	{
		std::cout << "file open error!" << std::endl;
		return ;
	}
	ss << ifs.rdbuf();
	ifs.close();
	str = ss.str();

	//replace
	while (1)
	{
		find_n = str.find(s1);
		if (find_n == std::string::npos)
			break;
		std::string	tempStr = str.substr(0, find_n);
		tempStr += s2;
		tempStr += str.substr(find_n + s1.length());
		str = tempStr;
	}
	
	//파일에 문자열 적기
	std::ofstream			ofs(file + ".replace");
	if (!ofs.good())
	{
		std::cout << "file open error!" << std::endl;
		return ;
	}
	ofs << str;
	ofs.close();
}
