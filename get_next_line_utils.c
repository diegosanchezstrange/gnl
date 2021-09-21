/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsanchez <dsanchez@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 20:28:48 by dsanchez          #+#    #+#             */
/*   Updated: 2021/09/21 12:58:25 by dsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

size_t	ft_strlen(char const *s)
{
	size_t	len;

	len = 0;
	if (!s)
		return (0);
	while (s[len] != 0)
		len++;
	return (len);
}

void		*ft_memmove(void *dst, void *src, size_t len)
{
	char *d;
	char *s;

	d = (char *)dst;
	s = (char *)src;
	if (dst == src)
		return (dst);
	if (s < d)
	{
		while (len--)
			*(d + len) = *(s + len);
		return (dst);
	}
	while (len--)
		*d++ = *s++;
	return (dst);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*res;

	if ((!s1 && !s2) || ft_strlen(s1) + ft_strlen(s2) == 0)
		return (NULL);
	res = (char *) malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!res)
		return (NULL);
	ft_memmove(res, s1, ft_strlen(s1));
	ft_memmove(res + ft_strlen(s1), s2, ft_strlen(s2));
	res[ft_strlen(s1) + ft_strlen(s2)] = 0;
	free(s1);
	return (res);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	size;
	size_t	i;

	i = 0;
	size = len;
	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		size = 0;
	else if (ft_strlen(s) < len)
		size = ft_strlen(s) - start;
	substr = (char *)malloc((size + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	while (s[i + start] && i < size)
	{
		substr[i] = s[i + start];
		i++;
	}
	substr[i] = 0;
	return (substr);
}
