#include "main.hpp"

int	main(void)
{
	std::cout << "TMP" << std::endl;

	Word test("sasdrgbtdgword");
	std::cout << test.getWord() << std::endl;
	std::cout << test.getColor(0) << std::endl;
	return (0);
}
