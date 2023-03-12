/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 02:03:25 by juwkim            #+#    #+#             */
/*   Updated: 2023/03/13 04:18:55 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strings.h"

/**
 * @brief 
 * Erases the data in the n bytes of the memory starting at the location
 * pointed to by s, by writing zeros.
 * @param s
 * @param n
 */
void	ft_bzero(void *s, int n)
{
	ft_memset(s, 0, n);
}
