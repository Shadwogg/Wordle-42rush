/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GUIView.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:05:05 by ggiboury          #+#    #+#             */
/*   Updated: 2025/04/16 13:21:11 by ggiboury         ###   ########.fr       */
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
		int	printVictory(void);
		int	print_word(Word *w);
		// int	print_word(Word *w);
};

#endif