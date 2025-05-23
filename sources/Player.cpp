#include "Player.hpp"


Player::Player() : _current_word(NULL)
{}

Player::~Player()
{
	for (std::list<Word*>::iterator it = _tested_words.begin();it != _tested_words.end();it++)
	{
		delete *it;
	}
}

int Player::read_input()
{
	std::string user_info;

	while (std::getline(std::cin, user_info))
	{
		if (Checker::is_word_valid(user_info))
		{
			_current_word = new Word(user_info);
			_tested_words.push_back(_current_word);
			return 0;
		}
		else
			std::cout << "ERROR" << std::endl;
	}
	return -1;
}


Word* Player::getCurrentWord()
{
	return (_current_word);
}

std::list <Word*> Player::getTestedWords()
{
	return (_tested_words);
}
