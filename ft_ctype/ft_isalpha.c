/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 02:04:38 by juwkim            #+#    #+#             */
/*   Updated: 2023/03/13 03:58:40 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

/**
 * @brief 
 * Checks for an alphabetic character.
 * It is equivalent to (isupper(c) || islower(c)).
 */
bool	ft_isalpha(char c)
{
	return ((__ctype_table(c) & alpha) != 0);
}
