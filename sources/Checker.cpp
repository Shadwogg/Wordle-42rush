#include "Checker.hpp"

bool Checker::is_answer_found(Word* word1, Word word2)
{
	if (!word1->getWord().compare(word2.getWord()))
		return true;
	return false;
}

bool Checker::is_word_valid_exist(const std::string curr_word)
{
	if (curr_word.size() != 5)
		return false;
	for(int i = 0; i < 5; i++)
	{
		if (!isalpha(curr_word[i]))
			return false;
	}
	return false;
}

bool Checker::is_word_valid(const std::string curr_word)
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

void Checker::find_colours(Word* word1, Word word2)
{
	std::string s1 = word1->getWord();
	std::string s2 = word2.getWord();

	for(int i = 0; i < 5; i++)
	{
		if (s1[i] == s2[i])
			word1->setColor(i, GREEN);
		else
			word1->setColor(i, GREY);
	}

	for(int i = 0; i < 5; i++)
	{
		if (s1[i] != s2[i] && find_char(i, s1, s2))
			word1->setColor(i, YELLOW);
	}
}

bool Checker::find_char(int position, std::string s1, std::string s2)
{
	char c = s1[position];
	int s1_occ = 0;
	int s2_occ = 0;

	for(int i = 0; i <= position; i++)
	{
		if (s1[i] == c && s1[i] != s2[i])
			s1_occ++;
	}

	for(int i = 0; i < 5; i++)
	{
		if (s2[i] == c && s1[i] != s2[i])
			s2_occ++;
	}
	if (s1_occ <= s2_occ && s1_occ > 0)
		return true;
	return false;
}
