/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GUIView.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaiti <lsaiti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:05:05 by ggiboury          #+#    #+#             */
/*   Updated: 2025/04/16 14:55:33 by lsaiti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GUIVIEW_HPP
# define GUIVIEW_HPP

# include "AView.hpp"
# include "Word.hpp"


class GUIView : public AView
{
	private :
		
	public :
		GUIView(void);
		virtual ~GUIView(void);

		int	present(void);
		int	printVictory(int attempts);
		int printFailure(std::string word);
		int	print_word(Word *w);
		int print_table(std::list<Word*> l);
		// int	print_word(Word *w);
};

#endif