
#include "../includes/Player.hpp"
#include "../includes/Checker.hpp"

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:34:14 by lahlsweh          #+#    #+#             */
/*   Updated: 2025/04/15 19:54:29 by ggiboury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Orchestror.hpp"
#include "main.hpp"

void test_word(void)
{
	std::cout << "Testing class Word" << std::endl;
	Word test("sasdrgbtdgword");
	std::cout << test.getWord() << std::endl;
	std::cout << test.getColor(0) << std::endl;
}


void test_orchestror(void)
{
	Orchestror	orchestror;
	int			num_words;
	int			random_number;
	std::string	chosen_word;
	
	num_words = orchestror.init(WORDS_FILEPATH);
	if (num_words == -1)
		return ;
	
	random_number = orchestror.generate_number();
	chosen_word = orchestror.generate_word(WORDS_FILEPATH, random_number);

	std::cout << "num_words in file : " << num_words << std::endl;
	std::cout << "    random number : " << random_number << std::endl;
	std::cout << "      chosen_word : " << chosen_word  << std::endl;
}

int	main(void)
{
	Player p;
	Word actual("bonjo");
	if (p.read_input() == -1)
		return -1;
	if (Checker::is_answer_found(p.getCurrentWord(), actual))
		std::cout << "YEAH" << std::endl;

	test_orchestror();

	test_word();

	return (0);
}
