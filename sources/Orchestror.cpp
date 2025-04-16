/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Orchestror.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 21:05:25 by ggiboury          #+#    #+#             */
/*   Updated: 2025/04/16 13:48:45 by ggiboury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Orchestror.hpp"

Orchestror::Orchestror(void)
{
}

Orchestror::~Orchestror(void)
{
}

// Parse the input and initialize everything
int	Orchestror::init(std::string filepath)
{
	std::ifstream	word_file(filepath);

	if (!word_file)
	{
		std::cerr << "Error opening file." << std::endl;
		return (-1);
	}
	return (_d.parse(word_file));
}

// #include <time.h>
// #include <cstdlib>

// int			Orchestror::generate_number(void)
// {
// 	time_t seconds;
// 	seconds = time(NULL);
// 	// seconds += (24 * 60 * 60);
// 	unsigned long seed = seconds / (60 * 60 * 24);
// 	std::cout << seed << "for " << std::rand() << std::endl;

//     std::minstd_rand					generator(seed);
//     std::uniform_int_distribution<int>	distribution(0, _d.getSize());
// 	// std::cout << std::chrono::system_clock::now().time_since_epoch().count() << std::endl;

//     return distribution(generator);
// }

int			Orchestror::generate_number(void)
{
    unsigned long						seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::minstd_rand					generator(seed);
    std::uniform_int_distribution<int>	distribution(0, _d.getSize());

    return distribution(generator);
}

Word	Orchestror::generate_word(void)
{
	// Maybe we should add things here, # subject to read again to be sure (same word for a day ?)
	return (_d.getWord(this->generate_number()));
}

int		Orchestror::play(void)
{
	AView	*currentView;

	// Selection du mode, par defaut terminalView
	// NORMALEMENT JE DEVRAIS LE METTRE DAMS LE CONSTRUCTOR
	if (0)
		currentView = new GUIView();
	else
		currentView = new TerminalView();

	std::cout << "(debug) Debut jeu" << std::endl;

	currentView->present();
	Word	goal_word(this->generate_word());
	std::cout << "Triche :" << goal_word.getWord() << std::endl;
	while (true)
	{
		if (_p.read_input() == -1) // until valid word
			return (-1); // NOT SURE ABOUT THIS, WE SHOULD DELETE BEFORE ?
		if (Checker::is_answer_found(_p.getCurrentWord(), goal_word))
		{
			currentView->printVictory();
			break ;
		}
		else
			currentView->print_word(_p.getCurrentWord());
	}
	std::cout << "(debug) FIN JEU" << std::endl;

	return (0);
}
