#include "../includes/Player.hpp"

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
		if (this->is_word_valid(user_info))
		{
			std::cout << user_info << std::endl;
			_tested_words.push_back(user_info);
			_current_word = new Word(user_info);
			return 0;
		}
		else
			std::cout << "ERROR" << std::endl;
	}
	return -1;
}

bool Player::is_word_valid(const std::string curr_word)
{
	if (curr_word.size() != 5)
		return false;
	for(int i = 0; i < 5; i++)
	{
		if (!isalpha(curr_word[i]))
			return false;
	}
	return true;
}

Word* Player::getCurrentWord()
{
	return (_current_word);
}
