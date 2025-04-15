#ifndef ORCHESTROR_HPP
# define ORCHESTROR_HPP

# include <fstream>
# include <random>
# include <chrono>
# include "main.hpp"

# include "Player.hpp"
# include "Dictionary.hpp"

class Orchestror
{
	private:
		Player	_p;
		Dictionary _d;

	public:
		Orchestror(void);
		~Orchestror(void);
	
		int			init(std::string filepath);
		int			generate_number(void);
		std::string	generate_word(void);
		int		play(void);
};

#endif
