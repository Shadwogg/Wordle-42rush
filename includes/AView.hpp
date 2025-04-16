/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AView.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 20:55:49 by ggiboury          #+#    #+#             */
/*   Updated: 2025/04/16 13:45:51 by ggiboury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AVIEW_HPP
# define AVIEW_HPP

# include "Word.hpp"


class AView
{
	public :
		AView(void);
		virtual ~AView(void) = 0;

		virtual int	present(void) = 0;
		virtual int	print_word(Word *w) = 0;
		virtual int	printVictory(void) = 0;
};

#endif