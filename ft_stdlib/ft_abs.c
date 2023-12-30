/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 02:22:21 by juwkim            #+#    #+#             */
/*   Updated: 2023/03/13 04:01:17 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"

/**
 * @brief 
 * @param a 
 * @return The absolute value of the integer argument.
 */
int	ft_abs(int a)
{
	if (a >= 0)
		return (a);
	else
		return (-a);
}
