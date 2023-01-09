/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 02:01:30 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/09 10:07:58 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while (*str && ft_isspace(*str))
		str++;
	while (*str)
	{
		if (*str == '-')
			sign *= -1;
		else if (*str != '+')
			break ;
		str++;
	}
	while (*str && ft_isdigit(*str))
		res = res * 10 + *str++ - '0';
	return (sign * res);
}
