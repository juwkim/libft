/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 00:45:56 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/18 03:57:33 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

int	ft_strfind(const char *str, char c)
{
	int			idx;

	idx = 0;
	while (str[idx] && str[idx] != c)
		++idx;
	if (str[idx] == c)
		return (idx);
	else
		return (-1);
}
