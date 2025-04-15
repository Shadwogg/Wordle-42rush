#ifndef CHECKER_HPP
# define CHECKER_HPP

# include "Word.hpp"

// Class Checker
// bool is_answer_found(Word word1, Word word2)

class Checker {
	private:
		Checker();
	public:
		static bool is_answer_found(Word* word1, Word word2);
		static bool is_word_valid(std::string curr_word);
};

#endif
