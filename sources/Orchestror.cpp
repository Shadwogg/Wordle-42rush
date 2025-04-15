#include "Orchestror.hpp"

Orchestror::Orchestror(void)
{
	return ;
}

Orchestror::~Orchestror(void)
{
	return ;
}

// Parse the input and initialize everything
int			Orchestror::init(std::string filepath)
{
	std::ifstream	word_file(filepath);

	if (!word_file)
	{
		std::cerr << "Error opening file." << std::endl;
		return (-1);
	}
	return (_d.parse(word_file));
}

int			Orchestror::generate_number(void)
{
    unsigned long						seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::minstd_rand					generator(seed);
    std::uniform_int_distribution<int>	distribution(0, _d.getSize());

    return distribution(generator);
}

std::string	Orchestror::generate_word(std::string filepath, int num_line)
{
	std::ifstream	word_file(filepath);
	std::string		line;
	int				num_words;
	std::string		chosen_word;

	if (!word_file)
	{
		std::cerr << "Error opening file." << std::endl;
		return (chosen_word);
	}
	num_words = 0;
	while (std::getline(word_file, line) && num_words < num_line - 1)
	{
		if (line.length() != WORD_LENGTH)
		{
			std::cerr << "Error: bad file format" << std::endl;
			return (chosen_word);
		}
		for (int i = 0; i < WORD_LENGTH; i++)
		{
			if (!std::isalpha(line[i]))
			{
				std::cerr << "Error: bad file format" << std::endl;
				return (chosen_word);
			}
		}
		num_words++;
	} 
	chosen_word = line;
	word_file.close();
	return (chosen_word);
}

/*void		Orchestror::play(void)
{
	return ;
}*/

/*void		Orchestror::parse(void)
{
	return ;
}*/
