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
	t_list		*new;

	if (!f || !del)
		return (NULL);
	tmp = NULL;
	while (lst)
	{
		if (!(new = ft_lstnew((*f)(lst->content))))
		{
			while (tmp)
			{
				new = tmp->next;
				(*del)(tmp->content);
				free(tmp);
				tmp = new;
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&tmp, new);
		lst = lst->next;
	}
	return (lst);
}
