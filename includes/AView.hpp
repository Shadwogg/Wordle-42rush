/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AView.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaiti <lsaiti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 20:55:49 by ggiboury          #+#    #+#             */
/*   Updated: 2025/04/16 18:40:53 by lsaiti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AVIEW_HPP
# define AVIEW_HPP

# include <list>
# include "Word.hpp"

class AView
{
	public :
		AView(void);
		virtual ~AView(void) = 0;

		virtual int	present(int nb_word) = 0;
		virtual int	print_word(Word *w) = 0;
		virtual int	printVictory(int attempts) = 0;
		virtual int printFailure(std::string word) = 0;
		virtual int print_table(std::list<Word*> l) = 0;
};

#endif