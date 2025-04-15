/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Word.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:55:14 by ggiboury          #+#    #+#             */
/*   Updated: 2025/04/15 16:40:57 by ggiboury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WORD_HPP
# define WORD_HPP

/*
Green : good letter at the right place
Yellow : Good letter at the wrong place
grey : Wrong letter
*/
enum Color {empty = 0, green, yellow, grey};


class Word
{
	private:
		std::string const _word;
		enum Color _colors[5] = {empty, empty, empty, empty, empty};
		
	public:
		Word(std::string);
		~Word(void);
	
		// int	parse(void);
		
		std::string getWord(void) const;

		enum Color[5]   getColor(void) const;
		void    setColor(unsigned int pos, enum Color[5] colors);
};

# endif