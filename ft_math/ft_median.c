/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_median.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:14:07 by juwkim            #+#    #+#             */
/*   Updated: 2023/03/13 03:59:39 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

/**
 * @brief 
 * @return The middle of the three.
 */
int	ft_median(int a, int b, int c)
{
	return (ft_max(ft_min(a, b), ft_min(ft_max(a, b), c)));
}
