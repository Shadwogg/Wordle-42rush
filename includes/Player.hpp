#ifndef PLAYER_HPP
# define PLAYER_HPP

# include <iostream>
# include <list>
# include "Word.hpp"

class Player {
	private:
		Word* _current_word;
		std::list <std::string> _tested_words;
		std::list <std::string> _found_words;
	public:
		Player();
		virtual ~Player();
		int read_input();
		bool is_word_valid(std::string curr_word);
		Word* getCurrentWord();
};

#endif
