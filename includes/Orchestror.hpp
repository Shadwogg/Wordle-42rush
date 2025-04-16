#ifndef ORCHESTROR_HPP
# define ORCHESTROR_HPP

# include <fstream>
# include <random>
# include <chrono>
# include "main.hpp"

# include "Player.hpp"
# include "Dictionary.hpp"
# include "AView.hpp"
# include "TerminalView.hpp"
# include "GUIView.hpp"

class Orchestror
{
	private:
		Player	_p;
		Dictionary _d;
	public:
		Orchestror(void);
		~Orchestror(void);

		int		init(std::string filepath);
		int		generate_number(void);
		Word	generate_word(void);
		int		play(void);
};

#endif
