/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 04:53:25 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/09 13:06:38 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strnstr(const char *str, const char *to_find, int n)
{
	const int	find_len = ft_strlen(to_find);

	if (find_len == 0)
		return ((char *)str);
	while (*str && n-- >= find_len)
	{
		if (*str == *to_find && !ft_memcmp(str, to_find, find_len))
			return ((char *)str);
		str++;
	}
	return (NULL);
}
