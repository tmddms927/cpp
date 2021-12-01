/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungoh <seungoh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 09:48:07 by seungoh           #+#    #+#             */
/*   Updated: 2021/12/01 10:34:20 by seungoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

class	Replace
{
	private:
		
	public:
    	Replace();
    	~Replace();
		static void	replace(const std::string &file, const std::string &s1, const std::string &s2);
};

#endif
