/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 02:03:51 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/09 11:52:54 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"

void	*ft_calloc(int nmemb, int size)
{
	char	*buf;

	buf = malloc(nmemb * size);
	if (buf == NULL)
		return (NULL);
	ft_bzero(buf, nmemb * size);
	return (buf);
}
