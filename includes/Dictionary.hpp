/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dictionary.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaiti <lsaiti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:44:26 by ggiboury          #+#    #+#             */
/*   Updated: 2025/04/15 19:59:07 by ggiboury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICTIONARY_HPP
# define DICTIONARY_HPP

# include <fstream>
# include <iostream>
# include <set>

# include "Word.hpp"
# include "main.hpp"


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
