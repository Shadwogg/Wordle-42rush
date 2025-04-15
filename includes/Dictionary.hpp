/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dictionary.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaiti <lsaiti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:44:26 by ggiboury          #+#    #+#             */
/*   Updated: 2025/04/15 18:25:02 by lsaiti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICTIONARY_HPP
# define DICTIONARY_HPP

# include <fstream>
# include <iostream>
# include <list>

# include "Word.hpp"


class Dictionary
{
	private :
		// For now, we use an list as it is the simplest container
		std::list<Word> dict;
		std::string _filename;

	public :
		Dictionary(std::string filename);
		~Dictionary(void);

		int	parse(void);
};

# endif
