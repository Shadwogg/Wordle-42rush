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

/*
int	Orchestror::generate_number(unsigned int max)
{
	std::chrono::system_clock::time_point	now = std::chrono::system_clock::now();
	std::chrono::system_clock::duration		since_epoch = now.time_since_epoch();
	int	days_since_epoch = std::chrono::duration_cast<std::chrono::duration<int, std::ratio<86400>>>(since_epoch).count();
	days_since_epoch += 3;
	std::cout << days_since_epoch << std::endl;
	std::minstd_rand						rng(days_since_epoch);
	std::uniform_int_distribution<int>		dist(0, max);

	return (dist(rng));
}
*/

/*int	Orchestror::generate_number(unsigned int max)
{
	unsigned long	seed = std::chrono::system_clock::now().time_since_epoch().count();

	std::cout << "seed: " << seed << std::endl;
	std::minstd_rand					generator(seed);
	std::uniform_int_distribution<int>	distribution(0, max);

	return (distribution(generator));
}*/

int Orchestror::generate_number(unsigned int max)
{
	auto								now = std::chrono::system_clock::now();
	std::time_t							now_time = std::chrono::system_clock::to_time_t(now);
	std::tm*							now_tm = std::localtime(&now_time);
	unsigned int						seed = (now_tm->tm_year + 1900) * 10000 + (now_tm->tm_mon + 1) * 100 + now_tm->tm_mday;
	seed += 3;
	std::cout << "seed: " << seed << std::endl;
	std::mt19937						generator(seed);
	std::uniform_int_distribution<int>	distribution(0, max);
	return (distribution(generator));
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
