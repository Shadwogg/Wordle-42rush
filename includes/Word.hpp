/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Word.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaiti <lsaiti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:55:14 by ggiboury          #+#    #+#             */
/*   Updated: 2025/04/15 18:58:14 by ggiboury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WORD_HPP
# define WORD_HPP

# include <string>
# include <iostream>

/*
Green : good letter at the right place
Yellow : Good letter at the wrong place
Grey : Wrong letter
*/
enum Color {EMPTY = 0, GREEN, YELLOW, GREY};

class Word
{
	private:
		std::string const _word;
		enum Color _colors[5] = {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY};
		
	public:
		Word(void);
		Word(std::string);
		~Word(void);

		bool	operator==(const Word &rhs);
		// bool	operator<(const Word &rhs);

		std::string const &getWord(void) const;

		enum Color	getColor(unsigned int pos) const; // read-only, as setColor should be used in this case
		enum Color	*getColors(void);
		void    setColor(unsigned int pos, enum Color colors);
};

bool	operator<(const Word &lhs, const Word &rhs);

# endif
