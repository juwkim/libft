/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 04:50:56 by juwkim            #+#    #+#             */
/*   Updated: 2023/03/13 04:19:09 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief
 * Concatenate two strings with c between them.
 * @param s1 
 * @param s2 
 * @param c 
 * @return s1 + c + s2
 */
char	*ft_strcjoin(const char *s1, const char *s2, char c)
{
	char			*buf;
	const size_t	s1_size = ft_strlen(s1);
	const size_t	s2_size = ft_strlen(s2);

	buf = (char *) malloc(sizeof(char) * (s1_size + s2_size + 2));
	ft_strcpy(buf, s1);
	buf[s1_size] = c;
	ft_strcpy(buf + s1_size + 1, s2);
	return (buf);
}
