/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Orchestror.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 21:05:25 by ggiboury          #+#    #+#             */
/*   Updated: 2025/04/15 21:24:50 by ggiboury         ###   ########.fr       */
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

int			Orchestror::generate_number(void)
{
    unsigned long						seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::minstd_rand					generator(seed);
    std::uniform_int_distribution<int>	distribution(0, _d.getSize());

    return distribution(generator);
}

std::string	Orchestror::generate_word()
{
	// Maybe we should add things here, # subject to read again to be sure (same word for a day ?)
	return (getWord(this.generate_number()));
}

int		Orchestror::play(void)
{
	AView	*currentView;
	Word	goal_word;

	// Selection du mode, par defaut terminalView
	// NORMALEMENT JE DEVRAIS LE METTRE DAMS LE CONSTRUCTOR
	if (0)
		currentView = new GUIView();
	else
		currentView = new TerminalView();

	std::cout << "(debug) Debut jeu" << std::endl;

	// while (Player.isPlaying())
	while (true)
	{
		currentView.present();
		goal_word = this->generate_word();
		while (true)
		{
			if (_p.read_input() == -1) // until valid word
				return (-1); // NOT SURE ABOUT THIS, WE SHOULD DELETE BEFORE ?
			if (Checker::is_answer_found(_p.getCurrentWord(), goal_word))
				currentView.printVictory();
			else
				currentView.printTable();
		}
	}
	std::cout << "(debug) FIN JEU" << std::endl;

	return (0);
}
