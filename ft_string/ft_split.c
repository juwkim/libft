/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 04:47:14 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/27 23:18:59 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

int	ft_count_words(char const *s, char c)
{
	int	cnt;

	cnt = 0;
	while (s && *s)
	{
		if (*s != c && (*(s + 1) == '\0' || *(s + 1) == c))
			cnt++;
		s++;
	}
	return (cnt);
}

char	**ft_free_dptr(char	**s)
{
	int	i;

	i = 0;
	while (s[i] != NULL)
		free(s[i++]);
	free(s);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		words_idx;
	char	*word_tmp;
	char	**buf;

	buf = (char **) malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (buf == NULL)
		return (NULL);
	words_idx = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			word_tmp = (char *)s;
			while (*s && *s != c)
				s++;
			buf[words_idx] = ft_substr(word_tmp, 0, s - word_tmp);
			if (!buf[words_idx++])
				return (ft_free_dptr(buf));
		}
	}
	buf[words_idx] = NULL;
	return (buf);
}
