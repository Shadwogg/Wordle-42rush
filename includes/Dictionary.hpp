/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dictionary.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:44:26 by ggiboury          #+#    #+#             */
/*   Updated: 2025/04/15 20:19:44 by ggiboury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICTIONARY_HPP
# define DICTIONARY_HPP

# include <fstream>
# include <iostream>
# include <set>

# include "main.hpp"
# include "Word.hpp"
# include "Checker.hpp"


class Dictionary
{
	private :
		// For now, we use an list as it is the simplest container
		std::set<Word> _dict;
		std::string _filename;

	public :
		Dictionary();
		~Dictionary(void);

		Word	getWord(unsigned int pos);
		unsigned int	getSize(void) const;

		// Returns true if the word is in the dictionary
		bool	doesWordExists(Word x);

		int	parse(std::ifstream &file);

};

# endif
