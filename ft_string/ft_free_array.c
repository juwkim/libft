/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 17:05:43 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/27 22:38:28 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

void	ft_free_array(char **array)
{
	int	idx;

	idx = 0;
	while (array[idx] != NULL)
	{
		free(array[idx]);
		++idx;
	}
	free(array);
}
