/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AView.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 20:55:49 by ggiboury          #+#    #+#             */
/*   Updated: 2025/04/15 21:30:51 by ggiboury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AVIEW_HPP
# define AVIEW_HPP

class AView
{
	public :
		AView();
		virtual ~AView();

		int	present(void);
		
};

#endif