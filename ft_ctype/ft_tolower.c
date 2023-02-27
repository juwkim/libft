/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 04:58:44 by juwkim            #+#    #+#             */
/*   Updated: 2023/02/27 17:53:28 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

char	ft_tolower(char c)
{
	assert(ft_isascii(c) == true);
	if (ft_isupper(c) == true)
		return (c ^ 0x20);
	return (c);
}
