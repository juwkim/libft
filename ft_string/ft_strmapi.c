/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 04:52:49 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/09 13:04:03 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*buf;
	size_t	i;

	if (s == NULL || f == NULL)
		return (NULL);
	buf = (char *) malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (buf == NULL)
		return (NULL);
	i = -1;
	while (s[++i])
		buf[i] = f(i, (char)s[i]);
	buf[i] = '\0';
	return (buf);
}
