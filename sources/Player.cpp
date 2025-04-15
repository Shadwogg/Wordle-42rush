#include "Player.hpp"


Player::Player() : _current_word(NULL)
{}

Player::~Player()
{
	delete _current_word;
}

int Player::read_input()
{
	std::string user_info;

	while (std::getline(std::cin, user_info))
	{
		if (Checker::is_word_valid(user_info))
		{
			_tested_words.push_back(user_info);
			_current_word = new Word(user_info);
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
