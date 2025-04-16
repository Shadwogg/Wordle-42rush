/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dictionary.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaiti <lsaiti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:44:26 by ggiboury          #+#    #+#             */
/*   Updated: 2025/04/16 18:40:43 by lsaiti           ###   ########.fr       */
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
		std::set<Word> _dict;
		std::string _filename;
	public :
		Dictionary();
		~Dictionary(void);

		Word	getWord(unsigned int pos);
		unsigned int	getSize(void) const;
		bool	doesWordExists(Word *x);
		int	parse(std::ifstream &file);
};

# endif
