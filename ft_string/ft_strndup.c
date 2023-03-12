/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 17:39:40 by juwkim            #+#    #+#             */
/*   Updated: 2023/03/13 04:08:11 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief 
 * Copy the string s at most n bytes.
 * @param s
 * @return the copied string.
 */
char	*ft_strndup(const char *s, size_t n)
{
	char		*copy;

	copy = malloc(sizeof(char) * (n + 1));
	ft_strncpy(copy, s, n);
	return (copy);
}
