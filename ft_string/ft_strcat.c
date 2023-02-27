/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 20:19:18 by juwkim            #+#    #+#             */
/*   Updated: 2023/02/27 20:36:30 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

void	ft_strcat(char *dest, const char *src)
{
	ft_memcpy(dest + ft_strlen(dest), src, src + ft_strlen(src));
}
