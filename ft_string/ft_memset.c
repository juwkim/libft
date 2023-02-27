/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 04:45:32 by juwkim            #+#    #+#             */
/*   Updated: 2023/02/27 22:57:19 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

void	ft_memset(const void *mem, const unsigned char c, size_t n)
{
	unsigned char	*cur;

	assert(mem != NULL);
	cur = (unsigned char *) mem;
	while (n--)
		*cur++ = c;
}
