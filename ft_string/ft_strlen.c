/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 04:52:42 by juwkim            #+#    #+#             */
/*   Updated: 2023/02/27 20:21:47 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

int	ft_strlen(const char *str)
{
	const char	*ptr = str;

	assert(str != NULL);
	while (*ptr != '\0')
		++ptr;
	return (ptr - str);
}
