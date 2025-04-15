/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahlsweh <lahlsweh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:34:14 by lahlsweh          #+#    #+#             */
/*   Updated: 2025/04/15 17:53:20 by lahlsweh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Orchestror.hpp"
#include "main.hpp"

int	main(void)
{
	Orchestror	orchestror;
	int			num_words;
	int			random_number;
	std::string	chosen_word;
	
	num_words = orchestror.init(WORDS_FILEPATH);
	if (num_words == -1)
		return (1);
	std::cout << "num_words in file : " << num_words << std::endl;
	random_number = orchestror.generate_number(num_words);
	std::cout << "    random number : " << random_number << std::endl;
	orchestror.generate_word(WORDS_FILEPATH, random_number);
	chosen_word = orchestror.generate_word(WORDS_FILEPATH, random_number);
	std::cout << "      chosen_word : " << chosen_word  << std::endl;
	return (0);
}
