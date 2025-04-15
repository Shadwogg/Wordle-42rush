#include "Orchestror.hpp"

Orchestror::Orchestror(void)
{
	return ;
}

Orchestror::~Orchestror(void)
{
	return ;
}

int			Orchestror::init(std::string filepath)
{
	std::ifstream	word_file(filepath);
	std::string		line;
	int				num_words;

	if (!word_file)
	{
		std::cerr << "Error opening file." << std::endl;
		return (-1);
	}
	num_words = 0;
	while (std::getline(word_file, line))
	{
		if (line.length() != WORD_LENGTH)
		{
			std::cerr << "Error: bad file format" << std::endl;
			return (-1);
		}
		for (int i = 0; i < WORD_LENGTH; i++)
		{
			if (!std::isalpha(line[i]))
			{
				std::cerr << "Error: bad file format" << std::endl;
				return (-1);
			}
		}
		num_words++;
	}
	word_file.close();
	return (num_words);
}

int			Orchestror::generate_number(unsigned int max)
{
    unsigned long						seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::minstd_rand					generator(seed);
    std::uniform_int_distribution<int>	distribution(0, max);

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
