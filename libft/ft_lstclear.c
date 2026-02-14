/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokrabem <tokrabem@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 22:28:10 by tokrabem          #+#    #+#             */
/*   Updated: 2026/02/14 06:49:01 by tokrabem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *temp;

	temp = *lst;
	if (!del)
		return;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone((*lst), del);
		*lst = temp;
	}
	free(*lst);
	(*lst) = NULL;
}