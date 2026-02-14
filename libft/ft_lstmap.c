/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokrabem <tokrabem@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 23:03:08 by tokrabem          #+#    #+#             */
/*   Updated: 2026/02/14 07:35:01 by tokrabem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_content;
	
	new_lst = NULL;
	if (!lst || !f || !del )
		return (NULL);
	while (lst)
	{
		new_content = (f)(lst->content);
		if (!new_content)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_content);
		lst = lst->next;
	}
	return (new_lst);
}