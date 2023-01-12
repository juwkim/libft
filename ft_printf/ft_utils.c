/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 05:18:07 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/13 03:05:21 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_skip_atoi(const char **s)
{
	int	num;

	num = 0;
	while ('0' <= **s && **s <= '9')
		num = num * 10 + *((*s)++) - '0';
	return (num);
}

int	_ft_itoa(char *buf, unsigned long num, int base, int lower)
{
	static const char	digits[16] = "0123456789ABCDEF";
	char				*ptr;

	ptr = buf;
	while (1)
	{
		*ptr++ = digits[num % base] | lower;
		num /= base;
		if (num == 0)
			break ;
	}
	ft_strreverse(buf, ptr - 1);
	return (ptr - buf);
}
