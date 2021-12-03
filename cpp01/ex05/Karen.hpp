#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>
#include <algorithm>

class	Karen
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

	public:
		typedef Karen*(*KarenFunc)(void);
    	Karen();
    	~Karen();
		void	complain(std::string level);
};

#endif
