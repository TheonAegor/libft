/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taegor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 19:33:49 by taegor            #+#    #+#             */
/*   Updated: 2020/11/21 15:09:37 by taegor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ps;
	unsigned char	ci;

	ps = (unsigned char *)s;
	ci = (unsigned char)c;
	i = -1;
	while (++i < n && ps[i] != '\0')
	{
		if (ps[i] == ci)
			return (ps += i);
	}
	if (ps[i] == '\0' && c == '\0')
		return (ps += i);
	return (NULL);
}
