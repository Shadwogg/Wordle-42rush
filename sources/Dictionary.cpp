/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dictionary.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:44:28 by ggiboury          #+#    #+#             */
/*   Updated: 2025/04/15 17:47:51 by ggiboury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dictionary.hpp"


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
		// std::cout << line << std::endl;
		x++;
	}
	std::cout << "Lines : " << x << std::endl;
	return (0);
}