#include "../includes/Player.hpp"
#include "../includes/Checker.hpp"



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
