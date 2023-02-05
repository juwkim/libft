/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 04:50:56 by juwkim            #+#    #+#             */
/*   Updated: 2023/02/03 23:56:05 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*buf;
	size_t	s1_size;
	size_t	s2_size;

	if (s1 == NULL)
		return (s2);
	if (s2 == NULL)
		return (s1);
	s1_size = ft_strlen(s1);
	s2_size = ft_strlen(s2);
	buf = (char *)malloc(sizeof(char) * (s1_size + s2_size + 1));
	if (!buf)
		return (NULL);
	ft_strlcpy(buf, s1, s1_size + 1);
	ft_strlcpy(buf + s1_size, s2, s2_size + 1);
	free(s1);
	free(s2);
	return (buf);
}
