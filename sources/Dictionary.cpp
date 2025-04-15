/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dictionary.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:44:28 by ggiboury          #+#    #+#             */
/*   Updated: 2025/04/15 19:59:12 by ggiboury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dictionary.hpp"

Dictionary::Dictionary()
{}

Dictionary::~Dictionary(void)
{

}

// Assumes pos is valid
Word	Dictionary::getWord(unsigned int pos)
{
	std::set<Word>::iterator begin(_dict.begin()), end(_dict.end());
	while (pos > 0 && begin != end)
	{
		pos--;
		begin++;
	}
	// if (begin == end) => err
	return (*begin);
}

unsigned int	Dictionary::getSize(void) const
{
	return (_dict.size());
}

/**
	Now we have to check if the file only has words of size 5
 */
int	Dictionary::parse(std::ifstream &file)
{
	std::string	line;

	while (std::getline(file, line))
	{
		if (line.length() != WORD_LENGTH)
		{
			std::cerr << "Error: bad file format" << std::endl;
			file.close();
			return (-1);
		}
		for (int i = 0; i < WORD_LENGTH; i++)
		{
			if (!std::isalpha(line[i]))
			{
				std::cerr << "Error: bad file format" << std::endl;
				file.close();
				return (-1);
			}
		}
		_dict.insert(Word(line));
	}
	file.close();
	return (0);
}

bool	Dictionary::doesWordExists(Word x){
	return (_dict.find(x) != _dict.end());
}
