/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 04:56:31 by juwkim            #+#    #+#             */
/*   Updated: 2023/02/27 23:00:23 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strtrim(const char *str, const char *set)
{
	const char	*begin;
	const char	*end;

	assert(str != NULL && set != NULL);
	begin = str;
	while (*begin && ft_strchr(set, *begin) != NULL)
		++begin;
	end = str + ft_strlen(str) - 1;
	while (end > begin && ft_strchr(set, *end) != NULL)
		--end;
	return (ft_strdup(begin, end + 1));
}
