/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokrabem <tokrabem@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 15:23:09 by tokrabem          #+#    #+#             */
/*   Updated: 2026/01/23 16:44:41 by tokrabem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"
#include "stdlib.h"
#include "libft.h"
void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t dim;
	void	*mem;

	dim = nmemb * size;
	mem = malloc(dim* sizeof(mem));
	if (nmemb == 0 || size == 0)
	{
		return(NULL);
		free(mem);
	}
	else
		ft_bzero(mem, dim);
	return (mem);
}