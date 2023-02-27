/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 17:39:40 by juwkim            #+#    #+#             */
/*   Updated: 2023/02/27 22:58:54 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strdup(const char *begin, const char *end)
{
	char		*copy;
	const int	size = end - begin;

	if (begin == NULL || end == NULL || size < 0)
		return (NULL);
	copy = malloc(sizeof(char) * (size + 1));
	assert(copy != NULL);
	if (copy == NULL)
		return (NULL);
	ft_memcpy(copy, begin, end);
	copy[size] = '\0';
	return (copy);
}
