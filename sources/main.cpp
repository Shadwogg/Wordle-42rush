#include "../includes/Player.hpp"
#include "../includes/Checker.hpp"
#include "../includes/Dictionary.hpp"

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

int	main(void)
{
	Player p;
	Word actual("bonjo");
	if (p.read_input() == -1)
		return -1;
	if (Checker::is_answer_found(p.getCurrentWord(), actual))
		std::cout << "YEAH" << std::endl;
	return (0);
}
