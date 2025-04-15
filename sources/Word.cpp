/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Word.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaiti <lsaiti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:29:47 by ggiboury          #+#    #+#             */
/*   Updated: 2025/04/15 19:00:19 by ggiboury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Word.hpp"

Word::Word(void) : _word("     ")
{}

Word::Word(std::string word) : _word(word)
{}

Word::~Word(void)
{}

bool	Word::operator==(const Word &rhs)
{
	if (this == &rhs || _word == rhs.getWord())
		return (true);
	return (false);
}

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

bool	operator<(const Word &lhs, const Word &rhs)
{
	return (lhs.getWord() < rhs.getWord());
}
