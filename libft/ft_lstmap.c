/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msahli <msahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 11:20:03 by msahli            #+#    #+#             */
/*   Updated: 2021/02/13 11:21:14 by msahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),
		void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;

	tmp = ft_lstnew(f(lst->content));
	new = tmp;
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
		if (!(tmp->next = ft_lstnew(f(lst->content))))
		{
			ft_lstdelone(tmp->next, del);
			return (NULL);
		}
		tmp = tmp->next;
	}
	return (new);
}
