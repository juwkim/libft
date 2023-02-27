/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 02:01:30 by juwkim            #+#    #+#             */
/*   Updated: 2023/02/27 22:56:27 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"

static bool	__is_mul_overflow(const int a, const int b);
static bool	__is_add_overflow(const int a, const int b);

int	ft_atoi(const char *str)
{
	int		num;
	int		dnum;
	t_sign	sign;

	sign = PLUS;
	if (ft_strchr("+-", *str) != NULL)
		sign = (*str++ == '-');
	num = 0;
	while (ft_isdigit(*str))
	{
		if (sign == PLUS)
			dnum = (*str++ - '0');
		else
			dnum = - (*str++ - '0');
		assert(__is_mul_overflow(num, 10) == false);
		assert(__is_add_overflow(num, 10) == false);
		num = num * 10 + dnum;
	}
	assert(*str == '\0');
	return (num);
}

static bool	__is_mul_overflow(const int a, const int b)
{
	return (a > INT32_MAX / b || a < INT32_MIN / b);
}

static bool	__is_add_overflow(const int a, const int b)
{
	return ((a > 0 && b > INT32_MAX - a) || (a < 0 && b < INT32_MIN - a));
}
