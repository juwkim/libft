/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_and_exit.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 02:26:15 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/14 02:28:45 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_error.h"

void	ft_error_and_exit(const char *message)
{
	ft_fprintf(STDERR, "Error\n");
	ft_fprintf(STDERR, "%s\n", message);
	exit(EXIT_FAILURE);
}
