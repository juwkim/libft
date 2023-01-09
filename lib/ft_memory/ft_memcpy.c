/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 04:41:23 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/09 11:59:56 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"

char	*ft_memcpy(char *dest, char *src, int n)
{
	char	*ptr;

	if (n == 0 || dest == src)
		return (dest);
	ptr = dest;
	while (n--)
		*ptr++ = *src++;
	return (dest);
}
