/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isblank.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 02:06:40 by juwkim            #+#    #+#             */
/*   Updated: 2023/03/13 03:57:48 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

/**
 * @brief 
 * Checks for a blank character. That is, a space or a tab.
 */
bool	ft_isblank(char c)
{
	return ((__ctype_table(c) & blank) != 0);
}
