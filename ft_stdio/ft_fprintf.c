/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __fprintf_out.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 22:02:56 by juwkim            #+#    #+#             */
/*   Updated: 2023/02/27 23:05:40 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"

static int	*__fd(void);
static int	__get_fd(void);
void		__set_fd(int fd);

int	ft_fprintf(int fd, const char *fmt, ...)
{
	va_list	args;
	int		printed;

	if (fmt == NULL)
		return (-1);
	va_start(args, fmt);
	printed = __vprintf(__get_vprintf_out_func(fd, NULL), fmt, args);
	va_end(args);
	return (printed);
}

int	__fprintf_out(const char *str, int len)
{
	return (write(__get_fd(), str, len));
}

static int	*__fd(void)
{
	static int	fd;

	return (&fd);
}

static int	__get_fd(void)
{
	return (*__fd());
}

void	__set_fd(int fd)
{
	*__fd() = fd;
}
