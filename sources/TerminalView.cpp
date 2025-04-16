#include "TerminalView.hpp"


TerminalView::TerminalView() {}
TerminalView::~TerminalView() {}

int TerminalView::print_table(std::list<Word*> l)
{
	int i = 0;
	for (std::list<Word*>::iterator it = l.begin();it != l.end();it++)
	{
		print_word(*it);
		i++;
	}
	for (; i< 6; i++)
	{
		std::cout << "\t" << "_ _ _ _ _" << std::endl;
	}
	return 0;
}

int TerminalView::print_word(Word *w)
{
	std::string s = w->getWord();
	Color c;
	std::cout << "\t";
	for (int i = 0; i < 5; i++)
	{
		c = w->getColor(i);
		if (c == GREEN)
			std::cout << "\033[1;32m" << s[i] << " " << "\033[0m";
		else if (c == YELLOW)
			std::cout << "\033[1;33m" << s[i] << " " << "\033[0m";
		else
			std::cout << s[i] << " ";
	}
	std::cout << std::endl;
	return 0;
}

int TerminalView::present(void)
{
	return 0;
}

int TerminalView::printVictory(int attemps)
{
	std::cout << "You've guessed the word in : " << attemps << " attempts" << std::endl;
	return 0;
}


int TerminalView::printFailure(std::string word)
{
	std::cout << "You've failed to guess the word: " << word << std::endl;
	return 0;
}