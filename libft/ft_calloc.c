/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokrabem <tokrabem@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 15:23:09 by tokrabem          #+#    #+#             */
/*   Updated: 2026/02/16 20:48:57 by tokrabem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (size != 0 && (nmemb * size > __SIZE_MAX__))
		return (NULL);
	mem = malloc(nmemb * size);
	if (!mem)
		return (NULL);
	else
		ft_bzero(mem, nmemb * size);
	return (mem);
}
