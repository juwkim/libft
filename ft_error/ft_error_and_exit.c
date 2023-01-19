/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_and_exit.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 02:26:15 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/18 05:07:25 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_error.h"

void	ft_error_and_exit(const char *message)
{
	ft_fprintf(STDERR, "Error\n");
	(void) message;
	exit(EXIT_FAILURE);
}
