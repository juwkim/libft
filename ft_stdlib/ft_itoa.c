/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 04:27:03 by juwkim            #+#    #+#             */
/*   Updated: 2023/03/02 10:09:50 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"

/**
 * @brief 
 * Converts an integer to ASCII string.
 * @param buf 
 * @param num 
 * @param radix
 * @return
 * return string
 */
char	*ft_itoa(int value, char *string, int radix)
{
	static const char	digits[16] = "0123456789ABCDEF";
	char				*ptr;

	ptr = string;
	while (true)
	{
		*ptr++ = digits[value % radix];
		value /= radix;
		if (value == 0)
			break ;
	}
	*ptr = '\0';
	ft_strrev(string, ptr - 1);
	return (string);
}
