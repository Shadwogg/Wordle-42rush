/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Word.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:29:47 by ggiboury          #+#    #+#             */
/*   Updated: 2025/04/15 16:44:07 by ggiboury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Word.hpp"

Word::Word(std::string word) : _word(word)
{}

~Word::Word(void)
{}


std::string	Word::getWord(void) const{
	return (_word);
}

enum Color[5]   Word::getColors(void) const{
	return (_colors);
}

enum Color   Word::getColor(unsigned int pos ) const{
	return (_colors[pos]);
}

void    Word::setColor(unsigned int pos, enum Color new_color){
	if (pos < 5)
		_colors[pos] = new_color;
}