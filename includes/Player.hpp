#ifndef PLAYER_HPP
# define PLAYER_HPP

# include <iostream>
# include <list>
# include "Word.hpp"
# include "Checker.hpp"

class Player {
	private:
		Word* _current_word;
		std::list <Word*> _tested_words;
		std::list <std::string> _found_words;
	public:
		Player();
		virtual ~Player();
		int read_input();
		Word* getCurrentWord();
		std::list <Word*> getTestedWords();
};

#endif
