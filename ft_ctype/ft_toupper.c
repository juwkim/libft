/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 04:59:11 by juwkim            #+#    #+#             */
/*   Updated: 2023/02/27 17:53:49 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

char	ft_toupper(char c)
{
	assert(ft_isascii(c) == true);
	if (ft_islower(c) == true)
		return (c ^ 0x20);
	return (c);
}
