/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokrabem <tokrabem@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 19:24:37 by tokrabem          #+#    #+#             */
/*   Updated: 2026/02/13 18:49:59 by tokrabem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "libft.h"
#include "string.h"
#include "limits.h"

int main()
{
	int content1 = 42;
	t_list *node1 = ft_lstnew(&content1);
	
	if (!node1)
	{
		printf( "Test failed with node2");
		return (1);
	}

	char *content2 = "Hello world";
	t_list *node2 = ft_lstnew(content2);
	
	if (!node2)
	{
		printf("Test failed with node2");
		return (1);
	}
	printf("Test 1 : %p -> %d\n", (void *)node1, *(int*)node1->content);
	printf("Test 2 : %p -> %s\n", (void *)node2, (char *)node2->content);

	free(node1);
	free(node2);
	return 0;
	
}
