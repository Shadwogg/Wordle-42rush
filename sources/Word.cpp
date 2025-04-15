/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Word.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:29:47 by ggiboury          #+#    #+#             */
/*   Updated: 2025/04/15 17:23:40 by ggiboury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Word.hpp"

Word::Word(void) : _word("     ")
{}

Word::Word(std::string word) : _word(word)
{}

Word::~Word(void)
{}


std::string const	&Word::getWord(void) const{
	return (_word);
}

enum Color   Word::getColor(unsigned int pos) const{
	return (_colors[pos]);
}

enum Color   *Word::getColors(void){
	return (_colors);
}

void    Word::setColor(unsigned int pos, enum Color new_color){
	if (pos < 5)
		_colors[pos] = new_color;
}