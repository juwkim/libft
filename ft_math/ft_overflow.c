/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_overflow.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:43:40 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/16 13:53:13 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

bool	ft_is_mul_overflow(const int a, const int b)
{
	return (a > INT32_MAX / b || a < INT32_MIN / b);
}

bool	ft_is_add_overflow(const int a, const int b)
{
	return ((a > 0 && b > INT32_MAX - a) || (a < 0 && b < INT32_MIN - a));
}
