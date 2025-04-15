/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dictionary.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaiti <lsaiti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:44:28 by ggiboury          #+#    #+#             */
/*   Updated: 2025/04/15 19:28:57 by lsaiti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dictionary.hpp"
# include "Player.hpp"

Dictionary::Dictionary(std::string filename) : _filename(filename){
	std::cout << "Init with " << filename << std::endl;
}

Dictionary::~Dictionary(void)
{

}

/**
	File already is present.
	Now we have to check if the file only has empty lines or words of size 5
 */
int	Dictionary::parse(void)
{
	std::ifstream file(_filename);

	if (!file.is_open())
	{
		std::cerr << "Error while opening dictionary file" << std::endl;
		return (-1);
	}
	int x = 0;
	std::string line;
	while (getline(file, line))
	{
		if (Player::is_word_valid(line))
			_dict.push_back(new Word(line));
		else{
			std::cerr << "Error, line" << x << " not valid" << std::endl;
			return (-1);
		}
		x++;
	}
	std::cout << "Number of line parsed: " << x << std::endl;
	return (0);
}

bool	Dictionary::doesWordExists(Word x){
	(void)x;
	return (false);
}
