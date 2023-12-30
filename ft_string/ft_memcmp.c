/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 04:39:11 by juwkim            #+#    #+#             */
/*   Updated: 2023/03/13 04:02:49 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief 
 * Compares the first n bytes (each interpreted as unsigned char)
 * of the memory areas s1 and s2.
 * @param s1 
 * @param s2 
 * @param n 
 * @return
 * An integer less than, equal to, or greater than zero
 * if the first n bytes of s1 is found, respectively,
 * to be less than, to match, or be greater than the first n bytes of s2.
 * For a nonzero return value, the sign is determined by the sign of
 * the difference between the first pair of bytes (interpreted as unsigned char)
 * that differ in s1 and s2. If n is zero, the return value is zero.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr1 = s1;
	const unsigned char	*ptr2 = s2;

	if (n == 0)
		return (0);
	while (--n && *ptr1 && *ptr1 != *ptr2)
	{
		++ptr1;
		++ptr2;
	}
	return (*ptr1 - *ptr2);
}
