/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taegor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 13:33:07 by taegor            #+#    #+#             */
/*   Updated: 2020/11/20 13:33:09 by taegor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
		void (*del)(void *))
{
	t_list		*tmp;

	if (lst)
	{
		tmp = lst;
		while (tmp != NULL)
		{
			if (!(f((t_list *)tmp)))
			{
				del(tmp);
			}
			tmp = tmp->next;
		}
	}
	return (lst);
}
