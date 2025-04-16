#ifndef CHECKER_HPP
# define CHECKER_HPP

# include "Word.hpp"
# include "Dictionary.hpp"

// Class Checker
// bool is_answer_found(Word word1, Word word2)

class Checker {
	private:
		Checker();
		static bool find_char(int position, std::string s1, std::string s2);
		public:
		static bool is_answer_found(Word* word1, Word word2);
		static bool is_word_valid(std::string curr_word);
		static void find_colours(Word* word1, Word word2);

};

#endif
