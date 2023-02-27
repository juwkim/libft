/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 02:01:30 by juwkim            #+#    #+#             */
/*   Updated: 2023/02/27 15:08:45 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

static void	__error_and_exit(const char *error_message);

int	ft_atoi(const char *str)
{
	int		num;
	int		dnum;
	t_sign	sign;

	sign = PLUS;
	if (ft_strfind("+-", *str) != -1)
		sign = (*str++ == '-');
	num = 0;
	while (ft_isdigit(*str))
	{
		if (sign == PLUS)
			dnum = (*str++ - '0');
		else
			dnum = - (*str++ - '0');
		if (ft_is_mul_overflow(num, 10))
			__error_and_exit("size of integer is so big");
		if (ft_is_add_overflow(num * 10, dnum))
			__error_and_exit("size of integer is so big");
		num = num * 10 + dnum;
	}
	if (*str != '\0')
		__error_and_exit("bad chracter while parsing integer");
	return (num);
}

static void	__error_and_exit(const char *error_message)
{
	ft_fprintf(STDERR_FILENO, error_message);
	exit(EXIT_FAILURE);
}

