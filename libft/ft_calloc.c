/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokrabem <tokrabem@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 15:23:09 by tokrabem          #+#    #+#             */
/*   Updated: 2026/02/15 20:21:58 by tokrabem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (size != 0 && (nmemb > __SIZE_MAX__ / size))
		return (NULL);
	mem = malloc(nmemb * size);
	if (!mem)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (NULL);
	else
		ft_bzero(mem, nmemb * size);
	return (mem);
	free(mem);
}
