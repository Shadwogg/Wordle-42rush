#ifndef TERMINAL_VIEW_HPP
# define TERMINAL_VIEW_HPP

#include "main.hpp"
# include "Player.hpp"

class TerminalView {
	private:
	
	public:
		TerminalView();
		void print_table(std::list<Word*> l);
		void print_word(Word *w);
};

#endif
