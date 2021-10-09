#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class				Contact
{
	private	:
		bool		fill;
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_num;
		std::string	darkest_sec;

	public	:
		Contact(void);
		void		get_info(int *index);
		void		print_list(int i);
		void		print_contact(void);
};

#endif