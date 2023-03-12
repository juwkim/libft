/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 20:19:18 by juwkim            #+#    #+#             */
/*   Updated: 2023/03/13 03:52:29 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief 
 * Copies the string pointed to by src,
 * including the terminating null byte ('\0'),
 * to the buffer pointed to by dest at most n bytes. 
 * @param dest 
 * @param src 
 * @param n 
 * @return dest
 */
char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	char	*ptr;

	ptr = dest;
	while (n-- && *src != '\0')
		*ptr++ = *src++;
	*ptr = '\0';
	return (dest);
}
