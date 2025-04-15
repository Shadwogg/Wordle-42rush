#include "../includes/Checker.hpp"

bool Checker::is_answer_found(Word* word1, Word word2)
{
	if (!word1->getWord().compare(word2.getWord()))
		return true;
	return false;
}
