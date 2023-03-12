/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 00:47:18 by juwkim            #+#    #+#             */
/*   Updated: 2023/03/13 03:55:38 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

# include <stdlib.h>
# include <assert.h>

# include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void	*dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);

size_t	ft_strlen(const char *s);

char	*ft_strcat(char *dest, const char *src);
char	*ft_strncat(char *dest, const char *src, size_t n);

char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);

int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, size_t n);

char	*ft_strdup(const char *s);
char	*ft_strndup(const char *s, size_t n);

char	*ft_strstr(const char *haystack, const char *needle);

#endif // FT_STRING_H
