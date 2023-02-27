/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 10:01:44 by juwkim            #+#    #+#             */
/*   Updated: 2023/02/27 14:53:39 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATH_H
# define FT_MATH_H

# include <stdint.h>
# include <stdbool.h>

# include "libft.h"

typedef enum s_sign
{
	PLUS,
	MINUS
}	t_sign;

int		ft_min(int a, int b);
int		ft_max(int a, int b);
int		ft_median(int a, int b, int c);
int		ft_abs(int a);
void	ft_swap(int *a, int *b);

bool	ft_is_mul_overflow(const int a, const int b);
bool	ft_is_add_overflow(const int a, const int b);

int		ft_atoi(const char *str);
char	*ft_itoa(int n);

#endif // FT_MATH_H
