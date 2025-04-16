#include "Checker.hpp"

bool Checker::is_answer_found(Word* word1, Word word2)
{
	if (!word1->getWord().compare(word2.getWord()))
		return true;
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