/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 04:54:33 by juwkim            #+#    #+#             */
/*   Updated: 2023/03/13 04:32:07 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief 
 * @param s 
 * @param c 
 * @return
 * A pointer to the last occurrence
 * of the character c in the string s. 
 */
char	*ft_strrchr(const char *s, int c)
{
	const char			*ptr;
	const unsigned char	cc = (unsigned char) c;

	ptr = s + ft_strlen(s) - 1;
	while (ptr > s && *ptr != cc)
		--ptr;
	return ((char *) ptr);
}
