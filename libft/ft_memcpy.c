/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokrabem <tokrabem@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 14:28:02 by tokrabem          #+#    #+#             */
/*   Updated: 2026/01/23 08:26:57 by tokrabem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *dst;
	unsigned const char *sr;

	dst = dest;
	sr = src;
	
	if (dst == NULL)
		return (NULL);
	while (n--)
	{
		*dst = *sr;
		dst++;
		sr++;
	}
	return (dest);
}