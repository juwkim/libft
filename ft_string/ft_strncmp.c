/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 04:53:13 by juwkim            #+#    #+#             */
/*   Updated: 2023/02/27 20:37:57 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	assert(n != 0);
	while (--n && *str1 && *str1 == *str2)
	{
		++str1;
		++str2;
	}
	return (*(unsigned char *)str1 - *(unsigned char *)str2);
}
