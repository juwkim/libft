/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 02:01:30 by juwkim            #+#    #+#             */
/*   Updated: 2023/02/28 00:57:08 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"

static bool	__is_mul_overflow(const int a, const int b);
static bool	__is_add_overflow(const int a, const int b);

/**
 * @brief 
 * Converts the initial portion of the string pointed to by nptr to int
 * @param nptr 
 * @return The converted value.
 */
int	ft_atoi(const char *nptr)
{
	int		num;
	int		dnum;
	t_sign	sign;

	sign = PLUS;
	if (ft_strchr("+-", *nptr) != NULL)
		sign = (*nptr++ == '-');
	num = 0;
	while (ft_isdigit(*nptr))
	{
		if (sign == PLUS)
			dnum = (*nptr++ - '0');
		else
			dnum = - (*nptr++ - '0');
		assert(__is_mul_overflow(num, 10) == false);
		assert(__is_add_overflow(num * 10, dnum) == false);
		num = num * 10 + dnum;
	}
	assert(*nptr == '\0');
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
