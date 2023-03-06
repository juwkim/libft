/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 04:45:32 by juwkim            #+#    #+#             */
/*   Updated: 2023/03/02 10:17:21 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief 
 * Fills the first n bytes of the memory area pointed to by mem
 * with the constant byte c.
 * @param mem 
 * @param c 
 * @param n 
 * @return
 * return mem
 */
void	*ft_memset(void *mem, const unsigned char c, size_t n)
{
	unsigned char	*cur;

	assert(mem != NULL);
	cur = (unsigned char *) mem;
	while (n--)
		*cur++ = c;
	return (mem);
}
