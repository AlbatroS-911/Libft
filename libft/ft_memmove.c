/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokrabem <tokrabem@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 14:59:09 by toky              #+#    #+#             */
/*   Updated: 2026/01/23 08:41:44 by tokrabem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

static void	ft_strcpy(unsigned char *s1,unsigned char *s2)
{
	int	i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *dst;
	unsigned char *sr;
	unsigned char *temp;
	size_t i;

	dst = (unsigned char *)dest;
	sr = (unsigned char *)src;
	i = 0;

	ft_strcpy(temp, sr);
	while (i < n)
	{
		dst[i] = temp[i];
		i++;
	}
	return (dest);
}