/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strings.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 20:43:23 by juwkim            #+#    #+#             */
/*   Updated: 2023/03/13 04:15:32 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRINGS_H
# define FT_STRINGS_H

# include "ft_string.h"

void	ft_bzero(void *s, int n);

char	**ft_split(const char *s, const char delim);

void	ft_strrev(char *s);

char	*ft_strtok(char *str, char delim);
char	*ft_strtrim(const char *str, const char *set);

char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strcjoin(const char *s1, const char *s2, char c);

#endif // FT_STRINGS_H
