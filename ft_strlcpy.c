/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taegor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 13:27:59 by taegor            #+#    #+#             */
/*   Updated: 2020/11/20 21:39:10 by taegor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src,
		size_t size)
{
	int		result_len;

	if (!dst)
		return (0);
	result_len = ft_strlen(src);
	if (ft_strlen(dst) > 0 && size > 0)
	{
		while (*src && size-- > 1)
		{
			*dst++ = *src++;
		}
		*dst = '\0';
	}
	return (result_len);
}
