/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokrabem <tokrabem@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 14:59:09 by toky              #+#    #+#             */
/*   Updated: 2026/02/14 07:50:43 by tokrabem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dst;
	const unsigned char	*sr;
	size_t				i;

	i = 0;
	dst = (unsigned char *)dest;
	sr = (const unsigned char *)src;
	if (!dest || !src)
		return (NULL);
	if (dst > sr)
		while (n-- > 0)
			dst[n] = sr[n];
	else
	{
		while (i < n)
		{
			dst[i] = sr[i];
			i++;
		}
	}
	return (dst);
}
