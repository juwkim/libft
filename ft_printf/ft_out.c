/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_out.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 06:31:19 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/13 03:06:04 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_c(int fd, char c, t_opt *opt)
{
	int	printed;

	printed = 0;
	if (!opt->left)
		while (opt->width-- > 1)
			printed += write(fd, " ", 1);
	printed += write(fd, &c, 1);
	while (opt->width-- > 1)
		printed += write(fd, " ", 1);
	return (printed);
}

int	ft_print_string(int fd, const char *s, t_opt *opt)
{
	int	len;
	int	printed;

	printed = 0;
	if (s == NULL)
		s = "(null)";
	len = ft_strlen(s);
	if (opt->dot && len > opt->prec)
		len = opt->prec;
	if (!opt->left)
		while (len < opt->width--)
			printed += write(fd, " ", 1);
	printed += write(fd, s, len);
	while (len < opt->width--)
		printed += write(fd, " ", 1);
	return (printed);
}

int	ft_print_address(int fd, unsigned long num, t_opt *opt)
{
	int			printed;
	char		buf[16];
	const int	len = _ft_itoa(buf, num, 16, 32);

	printed = 0;
	opt->width -= 2 + len;
	if (!opt->left)
		while (opt->width-- > 0)
			printed += write(fd, " ", 1);
	printed += write(fd, "0x", 2) + write(fd, buf, len);
	while (opt->width-- > 0)
		printed += write(fd, " ", 1);
	return (printed);
}

int	ft_print_unsigned(int fd, unsigned long num, t_opt *opt, int flag)
{
	int			i;
	int			printed;
	char		b[32];
	const int	len = _ft_itoa(b, num, 10 + 6 * (flag > 10), 32 * (flag > 16));

	printed = 0;
	opt->width -= (num && opt->special) << 1;
	opt->width -= ft_max(len, opt->prec) * (num || !opt->dot || opt->prec);
	if (!opt->left && (opt->dot || !opt->zeropad))
		while (opt->width-- > 0)
			printed += write(fd, " ", 1);
	i = 'X' | (32 * (flag > 16));
	if (num && opt->special)
		printed += write(fd, "0", 1) + write(fd, &i, 1);
	if (!opt->left)
		while (opt->width-- > 0)
			printed += write(fd, &opt->zeropad_char, 1);
	i = ft_max(len, opt->prec);
	while (len < i--)
		printed += write(fd, "0", 1);
	if (num || !opt->dot || opt->prec)
		printed += write(fd, b, len);
	while (opt->width-- > 0)
		printed += write(fd, " ", 1);
	return (printed);
}

int	ft_print_signed(int fd, long num, t_opt *opt)
{
	int		i;
	int		len;
	int		printed;
	char	buf[32];

	printed = 0;
	ft_set_sign(&num, opt);
	len = _ft_itoa(buf, num, 10, 0);
	opt->width -= ft_max(len, opt->prec) * (num || !opt->dot || opt->prec);
	if (!opt->left && (opt->dot || !opt->zeropad))
		while (opt->width-- > 0)
			printed += write(fd, " ", 1);
	if (opt->sign_char)
		printed += write(fd, &opt->sign_char, 1);
	if (!opt->left)
		while (opt->width-- > 0)
			printed += write(fd, &opt->zeropad_char, 1);
	i = ft_max(len, opt->prec);
	while (len < i--)
		printed += write(fd, "0", 1);
	if (num || !opt->dot || opt->prec)
		printed += write(fd, buf, len);
	while (opt->width-- > 0)
		printed += write(fd, " ", 1);
	return (printed);
}
