/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 04:42:26 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/09 12:02:56 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"

char	*ft_memmove(char *dst, char *src, int len)
{
	char	*ptr;

	ptr = dst;
	if (dst < src)
		while (len--)
			*ptr++ = *src++;
	else if (dst > src)
		while (len--)
			dst[len] = src[len];
	return (dst);
}
