/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 02:47:23 by juwkim            #+#    #+#             */
/*   Updated: 2023/03/13 04:19:24 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief 
 * Reverse the string s.
 * @param s
 */
void	ft_strrev(char *s)
{
	char	tmp;
	char	*end;

	end = s + ft_strlen(s) - 1;
	while (s < end)
	{
		tmp = *s;
		*s = *end;
		*end = tmp;
		++s;
		--end;
	}
}
