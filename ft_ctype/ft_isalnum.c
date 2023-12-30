/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 02:04:24 by juwkim            #+#    #+#             */
/*   Updated: 2023/03/13 03:58:37 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

/**
 * @brief 
 * Checks for an alphanumeric character.
 * It is equivalent to (isalpha(c) || isdigit(c)).
 */
bool	ft_isalnum(char c)
{
	return ((__ctype_table(c) & alnum) != 0);
}
