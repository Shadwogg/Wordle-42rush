/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GUIView.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:18:28 by ggiboury          #+#    #+#             */
/*   Updated: 2025/04/16 12:36:16 by ggiboury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GUIView.hpp"

GUIView::GUIView(void) {}
GUIView::~GUIView(void) {}

int GUIView::present(void)
{
	return 0;
}

int GUIView::printVictory(void)
{
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