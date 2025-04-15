#include "main.hpp"


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
	std::cout << "TMP" << std::endl;

	// test_word();
	test_dictionary();

	return (0);
}
