/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 20:19:18 by juwkim            #+#    #+#             */
/*   Updated: 2023/03/02 10:07:18 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief 
 * Copies the string pointed to by src,
 * including the terminating null byte ('\0'),
 * to the buffer pointed to by dest. 
 * @param dest 
 * @param src 
 * @return
 * return char pointer pointing to '\0'
 */
char	*ft_strcpy(char *dest, const char *src)
{
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (dest);
}
