#include "TerminalView.hpp"

TerminalView::TerminalView() {}

void TerminalView::print_table(std::list<Word*> l)
{
	for (std::list<Word*>::iterator it = l.begin();it != l.end();it++)
	{
		print_word(*it);
	}
}

void TerminalView::print_word(Word *w)
{
	std::string s = w->getWord();
	Color c;
	for (int i = 0; i < 5; i++)
	{
		c = w->getColor(i);
		if (c == GREEN)
			std::cout << "\033[1;32m" << s[i] << "\033[0m";
		else if (c == YELLOW)
			std::cout << "\033[1;33m" << s[i] << "\033[0m";
		else
			std::cout << s[i];
	}
	std::cout << std::endl;
}