/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 09:49:12 by juwkim            #+#    #+#             */
/*   Updated: 2023/02/28 00:32:11 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

/**
 * @brief 
 * checks for an uppercase letter.
 */
bool	ft_isupper(char c)
{
	assert(ft_isascii(c) == true);
	return ((__ctype_table(c) & upper) != 0);
}
