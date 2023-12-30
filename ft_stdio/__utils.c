/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __utils.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 05:18:07 by juwkim            #+#    #+#             */
/*   Updated: 2023/03/13 04:32:24 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"

int	__skip_atoi(const char **s)
{
	int	num;

	num = 0;
	while (ft_isdigit(**s) == true)
		num = num * 10 + *((*s)++) - '0';
	return (num);
}

int	__itoa(char *buf, unsigned long num, int base, int is_lower)
{
	static const char	digits[16] = "0123456789ABCDEF";
	char				*ptr;

	ptr = buf;
	while (1)
	{
		*ptr++ = digits[num % base] | is_lower;
		num /= base;
		if (num == 0)
			break ;
	}
	ft_strrev(buf);
	return (ptr - buf);
}
