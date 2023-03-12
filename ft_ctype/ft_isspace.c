/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 09:31:39 by juwkim            #+#    #+#             */
/*   Updated: 2023/03/13 03:58:19 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

/**
 * @brief 
 * Checks for white-space characters.
 * These are: space, form-feed ('\\f'), newline ('\\n'), carriage return ('\\r'),
 * horizon‐tal tab ('\\t'), and vertical tab ('\\v').
 */
bool	ft_isspace(char c)
{
	return ((__ctype_table(c) & space) != 0);
}
