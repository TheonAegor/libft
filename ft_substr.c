/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taegor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 13:43:01 by taegor            #+#    #+#             */
/*   Updated: 2020/11/21 16:39:59 by taegor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_findlen(char *s)
{
	int				i;
	int				len;

	i = 0;
	len = 0;
	while (s[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

char				*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*p;
	size_t			i;
	size_t			len_s;

	i = 0;
	if (!s)
		return (0);
	len_s = ft_findlen((char *)s);
	p = (char *)malloc(len + 1);
	if (!p)
		return (NULL);
	while (i < len && i + start < len_s)
	{
		p[i] = s[i + start];
		i++;
	}
	p[i] = '\0';
	return (p);
}
