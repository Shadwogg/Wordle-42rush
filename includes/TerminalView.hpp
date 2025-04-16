#ifndef TERMINAL_VIEW_HPP
# define TERMINAL_VIEW_HPP

#include "main.hpp"
# include "Player.hpp"
# include "AView.hpp"
# include <set>

class TerminalView : public AView{
	public:
		TerminalView();
		~TerminalView();

		int print_table(std::list<Word*> l);
		int print_word(Word *w);
		int	present(int nb_word);
		int	printVictory(int attempts);
		int printFailure(std::string word);
};

#endif