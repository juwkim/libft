/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 04:45:32 by juwkim            #+#    #+#             */
/*   Updated: 2023/03/13 04:31:46 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief 
 * Fills the first n bytes of the memory area pointed to by s
 * with the constant byte c.
 * @param s 
 * @param c 
 * @param n 
 * @return s
 */
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char		*ptr;
	const unsigned char	cc = (unsigned char) c;

	ptr = (unsigned char *) s;
	while (n--)
		*ptr++ = cc;
	return (s);
}
