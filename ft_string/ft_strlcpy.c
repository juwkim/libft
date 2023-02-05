/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 04:52:26 by juwkim            #+#    #+#             */
/*   Updated: 2023/02/04 03:22:44 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

int	ft_strlcpy(char *dest, const char *src, size_t size)
{
	if (size > 1)
	{
		while (*src && --size)
			*dest++ = *src++;
	}
	*dest = '\0';
	return (1);
}
