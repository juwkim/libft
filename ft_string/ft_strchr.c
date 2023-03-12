/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 04:49:42 by juwkim            #+#    #+#             */
/*   Updated: 2023/03/13 04:31:29 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief 
 * 
 * @param s 
 * @param c 
 * @return
 * A pointer to the first occurrence of the character c
 * in the string s.
 */
char	*ft_strchr(const char *s, int c)
{
	const unsigned char	cc = (unsigned char) c;

	while (*s != '\0' && *s != cc)
		++s;
	if (*s == '\0')
		return (NULL);
	return ((char *) s);
}
