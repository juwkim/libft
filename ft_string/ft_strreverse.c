/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strreverse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 02:47:23 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/13 02:49:54 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

void	ft_strreverse(char *begin, char *end)
{
	char	tmp;

	while (begin < end)
	{
		tmp = *begin;
		*begin = *end;
		*end = tmp;
		begin++;
		end--;
	}
}
