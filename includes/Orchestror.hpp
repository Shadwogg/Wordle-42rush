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
		// Player	p;
		Dictionary _d;

	public:
		Orchestror(void);
		~Orchestror(void);
	
		int			init(std::string filepath);
		int			generate_number(void);
		std::string	generate_word(std::string filepath, int num_line);
		void		play(void);
};

#endif
