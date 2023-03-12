/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 04:41:23 by juwkim            #+#    #+#             */
/*   Updated: 2023/03/13 03:28:54 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief
 * Copies n bytes from memory area src to memory area dest.
 * The memory areas must not overlap.
 * @return dest
 */
void	*ft_memcpy(void	*dest, const void *src, size_t n)
{
	unsigned char		*dest_ptr;
	unsigned char		*src_ptr;

	dest_ptr = (unsigned char *) dest;
	src_ptr = (unsigned char *) src;
	while (n--)
		*dest_ptr++ = *src_ptr++;
	return (dest);
}
