/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 04:45:32 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/13 04:10:10 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"

void	ft_memset(void *ptr, unsigned char c, int n)
{
	unsigned char	*cur;

	cur = ptr;
	while (n--)
		*cur++ = c;
}
