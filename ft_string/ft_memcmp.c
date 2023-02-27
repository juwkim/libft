/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 04:39:11 by juwkim            #+#    #+#             */
/*   Updated: 2023/02/27 22:57:03 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

int	ft_memcmp(const void *mem1, const void *mem2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	assert(mem1 != NULL && mem2 != NULL && n != 0);
	ptr1 = (unsigned char *) mem1;
	ptr2 = (unsigned char *) mem2;
	while (--n && *ptr1 && *ptr1 != *ptr2)
	{
		++ptr1;
		++ptr2;
	}
	return (*ptr1 - *ptr2);
}
