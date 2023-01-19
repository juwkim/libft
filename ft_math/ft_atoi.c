/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 02:01:30 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/18 03:58:40 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

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
			ft_error_and_exit("size of integer is so big");
		if (ft_is_add_overflow(num * 10, dnum))
			ft_error_and_exit("size of integer is so big");
		num = num * 10 + dnum;
	}
	if (*str != '\0')
		ft_error_and_exit("bad chracter while parsing integer");
	return (num);
}
