#ifndef TERMINAL_VIEW_HPP
# define TERMINAL_VIEW_HPP

#include "main.hpp"
# include "Player.hpp"
# include "AView.hpp"
# include <set>

class TerminalView : public AView{
	private:
	
	public:
		TerminalView();
		~TerminalView();
		void print_table(std::set<Word*> l);
		int print_word(Word *w);
		int	present(void);
		int	printVictory(void);

};

#endif