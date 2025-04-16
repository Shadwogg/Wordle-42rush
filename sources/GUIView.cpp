/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GUIView.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaiti <lsaiti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:18:28 by ggiboury          #+#    #+#             */
/*   Updated: 2025/04/16 18:08:56 by lsaiti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GUIView.hpp"

GUIView::GUIView(void) {}
GUIView::~GUIView(void) {}

int GUIView::present(int nb_word)
{
	(void)nb_word;
	return 0;
}

int GUIView::printVictory(int attempts)
{
	(void)attempts;
	return 0;
}

int GUIView::printFailure(std::string word)
{
	(void)word;
	return 0;
}


int GUIView::print_table(std::list<Word*> l)
{
	(void)l;
	return 0;
}

int GUIView::print_word(Word *w)
{
	std::cout << w << std::endl;
	// std::string s = w->getWord();
	// Color c;
	// for (int i = 0; i < 5; i++)
	// {
	// 	c = w->getColor(i);
	// 	if (c == GREEN)
	// 		std::cout << "\033[1;32m" << s[i] << "\033[0m";
	// 	else if (c == YELLOW)
	// 		std::cout << "\033[1;33m" << s[i] << "\033[0m";
	// 	else
	// 		std::cout << s[i];
	// }
	// std::cout << std::endl;
	return 0;
}