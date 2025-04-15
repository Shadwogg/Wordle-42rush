#include "../includes/Player.hpp"
#include "../includes/Checker.hpp"
#include "main.hpp"
#include "TerminalView.hpp"

void test_word(void)
{
	std::cout << "Testing class Word" << std::endl;
	Word test("sasdrgbtdgword");
	std::cout << test.getWord() << std::endl;
	std::cout << test.getColor(0) << std::endl;
}

void test_dictionary(void)
{
	std::cout << "Testing class Dictionary" << std::endl;
	Dictionary t("words.txt");
	t.parse();
}

void test_orchestror(void)
{
	Orchestror	orchestror;
	int			num_words;
	int			random_number;
	std::string	chosen_word;
	
	num_words = orchestror.init(WORDS_FILEPATH);
	if (num_words == -1)
		return ;
	
	random_number = orchestror.generate_number(num_words);
	chosen_word = orchestror.generate_word(WORDS_FILEPATH, random_number);

	std::cout << "num_words in file : " << num_words << std::endl;
	std::cout << "    random number : " << random_number << std::endl;
	std::cout << "      chosen_word : " << chosen_word  << std::endl;
}

int	main(void)
{
	Player p;
	Word actual("salut");

	for (int i = 0; i < 6; i++)
	{
		if (p.read_input() == -1)
			return -1;
		if (Checker::is_answer_found(p.getCurrentWord(), actual))
		{
			std::cout << "You just found the word: " << actual.getWord() << std::endl;
			break;
		}
	}

	TerminalView t;
	t.print_table(p.getTestedWords());
	return (0);
}
