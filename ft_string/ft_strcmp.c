/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 04:53:13 by juwkim            #+#    #+#             */
/*   Updated: 2023/03/13 04:06:13 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief 
 * Compares the two strings s1 and s2.
 * The comparison is done using unsigned characters.
 * @param s1 
 * @param s2 
 * @return
 * An integer indicating the result of the comparison, as follows:
 * • 0, if the s1 and s2 are equal.
 * • a negative value if s1 is less than s2.
 * • a positive value if s1 is greater than s2.
 */
int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		++s1;
		++s2;
	}
	return (*(unsigned char *) s1 - *(unsigned char *) s2);
}
